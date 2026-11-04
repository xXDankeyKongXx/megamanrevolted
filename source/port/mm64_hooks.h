#ifndef MM64_HOOKS_H
#define MM64_HOOKS_H

// Functions called from the hooks and stubs in recomp/us.rev1.3ds.toml, plus libultra functions
// N64ModernRuntime doesn't implement. Included by every recompiled file via `recomp_include`.

#include "recomp.h"

#ifdef __cplusplus
extern "C" {
#endif

// Hooks (implemented in ultramodern/scheduling.cpp and source/port/mm64_game.cpp)
void yield_self(uint8_t* rdram);
void recomp_load_overlays(uint8_t* rdram, recomp_context* ctx);
void mm64_on_game_save(uint8_t* rdram, recomp_context* ctx); // mm64_ext.cpp

// libultra functions N64Recomp doesn't declare (implemented in librecomp/pak.cpp, ultra_stubs.cpp)
void osPfsNumFiles_recomp(uint8_t* rdram, recomp_context* ctx);
void osPfsRepairId_recomp(uint8_t* rdram, recomp_context* ctx);
void osUnmapTLBAll_recomp(uint8_t* rdram, recomp_context* ctx);

#ifdef __cplusplus
}
#endif

#endif
