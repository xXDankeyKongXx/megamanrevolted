# Launches the deployed build in one of the project's portable emulators (default: Azahar).
# Each emulator's <emu>/user folder is its data folder; the app lives on <emu>/user/sdmc/3ds/mm64.
# Usage: powershell -File tools/run_emu.ps1 [-Emu azahar|citra] [-O3DS]
# -O3DS: the Old 3DS build (make o3ds) from <emu>/user/sdmc/3ds/mm64-o3ds, with Azahar set to an Old 3DS
# (is_new_3ds=false in its qt-config.ini; any other run sets it back).
param([ValidateSet("azahar", "citra")][string]$Emu = "azahar", [switch]$O3DS)

$root = Split-Path -Parent $PSScriptRoot
$dir = Join-Path $root $Emu
$exe = if ($Emu -eq "azahar") { "azahar.exe" } else { "citra-qt.exe" }
$app = if ($O3DS) { Join-Path $dir "user\sdmc\3ds\mm64-o3ds\mm64-3ds-o3ds.3dsx" } else { Join-Path $dir "user\sdmc\3ds\mm64\mm64-3ds.3dsx" }
$config = Join-Path $dir "user\config\qt-config.ini"
if ($Emu -eq "azahar" -and (Test-Path -LiteralPath $config)) {
    $want = if ($O3DS) { "is_new_3ds=false" } else { "is_new_3ds=true" }
    $text = [IO.File]::ReadAllText($config)
    $new = [regex]::Replace($text, "(?m)^is_new_3ds\\default=.*$", "is_new_3ds\default=false")
    $new = [regex]::Replace($new, "(?m)^is_new_3ds=.*$", $want)
    if ($new -ne $text) { [IO.File]::WriteAllText($config, $new) }
}
$proc = Start-Process -FilePath (Join-Path $dir $exe) -ArgumentList "`"$app`"" -WorkingDirectory $dir -PassThru

# Size the window so the game picture is the 3DS's own size (400x480: top screen over bottom
# screen at 1x) instead of the large window the emulator remembers. The picture's widget is the
# window's largest visible child (Qt's OpenGL surface, class *OwnDC*, keeps a stale size and is
# skipped); the window grows or shrinks by the difference.
Add-Type -Namespace Emu -Name Win -MemberDefinition @'
[DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
[DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
[DllImport("user32.dll")] public static extern bool SetWindowPos(IntPtr h, IntPtr after, int x, int y, int w, int cy, uint flags);
[DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int cmd);
[DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
[DllImport("user32.dll", CharSet = CharSet.Unicode)] public static extern int GetClassName(IntPtr h, System.Text.StringBuilder s, int n);
public delegate bool EnumProc(IntPtr h, IntPtr p);
[DllImport("user32.dll")] public static extern bool EnumChildWindows(IntPtr h, EnumProc f, IntPtr p);
public struct RECT { public int Left, Top, Right, Bottom; }
public static IntPtr Largest(IntPtr parent) {
    IntPtr best = IntPtr.Zero; long area = 0;
    EnumChildWindows(parent, (h, p) => { if (!IsWindowVisible(h)) return true; var c = new System.Text.StringBuilder(64); GetClassName(h, c, 64); if (c.ToString().Contains("OwnDC")) return true; RECT r; GetClientRect(h, out r); long a = (long)(r.Right - r.Left) * (r.Bottom - r.Top); if (a > area) { area = a; best = h; } return true; }, IntPtr.Zero);
    return best;
}
'@
$want = @{ W = 400; H = 480 }
for ($i = 0; $i -lt 40; $i++) {
    Start-Sleep -Milliseconds 250
    $proc.Refresh()
    $main = $proc.MainWindowHandle
    if ($main -eq [IntPtr]::Zero) { continue }
    $child = [Emu.Win]::Largest($main)
    if ($child -eq [IntPtr]::Zero) { continue }
    [Emu.Win]::ShowWindow($main, 9) | Out-Null # restore if maximized
    $wr = New-Object Emu.Win+RECT; $cr = New-Object Emu.Win+RECT
    [Emu.Win]::GetWindowRect($main, [ref]$wr) | Out-Null
    [Emu.Win]::GetClientRect($child, [ref]$cr) | Out-Null
    $w = ($wr.Right - $wr.Left) + $want.W - ($cr.Right - $cr.Left)
    $h = ($wr.Bottom - $wr.Top) + $want.H - ($cr.Bottom - $cr.Top)
    [Emu.Win]::SetWindowPos($main, [IntPtr]::Zero, $wr.Left, $wr.Top, $w, $h, 0x14) | Out-Null # no z-order change, no activate
    if ($i -ge 8) { break } # a few passes: the window settles once the game starts
}
