# Automated test run: launches the deployed build in a project emulator for N seconds, sampling
# status.txt, then closes it and prints runtime.log (locked while running) and a PNG screenshot.
# Usage: powershell -File tools/test_run.ps1 [-Emu azahar|citra] [-Seconds 30] [-LogLines 80] [-SampleEvery 10] [-O3DS]
param([ValidateSet("azahar", "citra")][string]$Emu = "azahar", [int]$Seconds = 30, [int]$LogLines = 80, [int]$SampleEvery = 10, [switch]$O3DS)

$root = Split-Path -Parent $PSScriptRoot
$emuDir = Join-Path $root $Emu
$sd = Join-Path $emuDir $(if ($O3DS) { "user\sdmc\3ds\mm64-o3ds" } else { "user\sdmc\3ds\mm64" })

function Stop-ProjectEmulators {
    Get-Process citra-qt, azahar -ErrorAction SilentlyContinue | Where-Object { $_.Path -like "$root\*" } | Stop-Process -Confirm:$false
}

Stop-ProjectEmulators
Start-Sleep -Seconds 1
foreach ($f in "status.txt", "screenshot.bmp") { Remove-Item -LiteralPath (Join-Path $sd $f) -ErrorAction SilentlyContinue }

& (Join-Path $PSScriptRoot "run_emu.ps1") -Emu $Emu -O3DS:$O3DS
for ($t = $SampleEvery; $t -le $Seconds; $t += $SampleEvery) {
    Start-Sleep -Seconds $SampleEvery
    "t=${t}s " + (Get-Content -LiteralPath (Join-Path $sd "status.txt") -ErrorAction SilentlyContinue)
}
$alive = [bool](Get-Process citra-qt, azahar -ErrorAction SilentlyContinue | Where-Object { $_.Path -like "$root\*" })
Stop-ProjectEmulators
Start-Sleep -Seconds 2

"alive at end: $alive"
"--- runtime.log"
Get-Content -LiteralPath (Join-Path $sd "runtime.log") -ErrorAction SilentlyContinue | Select-Object -Last $LogLines
"--- screenshot"
$bmp = Join-Path $sd "screenshot.bmp"
if (Test-Path -LiteralPath $bmp) {
    $png = Join-Path $root "tools\tmp\screenshot.png"
    python -c "from PIL import Image; Image.open(r'$bmp').save(r'$png')"
    $png
} else { "(none)" }
