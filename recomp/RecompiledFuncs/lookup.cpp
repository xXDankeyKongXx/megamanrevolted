#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"

gpr get_entrypoint_address() { return (gpr)(int32_t)0x80025C00u; }

const char* get_rom_name() { return ".z64"; }

