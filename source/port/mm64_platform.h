#ifndef MM64_PLATFORM_H
#define MM64_PLATFORM_H

// Which console the app runs on, for the Old 3DS adaptations (fewer cores, less memory, no
// C-Stick or ZL/ZR). Decided by the hardware, not the build, so either build adapts.

#include <3ds.h>
#include <stdbool.h>

// New 3DS / New 2DS XL (asked once; APT must be up, which it is before the game starts).
static inline bool mm64_is_new3ds(void) {
    static int known = -1;
    if (known < 0) {
        bool n3ds = false;
        APT_CheckNew3DS(&n3ds);
        known = n3ds ? 1 : 0;
    }
    return known == 1;
}

// Under 100 MB for the app (Old 3DS: 64 or 80 MB; New 3DS: 124 MB): caches are kept smaller.
static inline bool mm64_small_memory(void) {
    return osGetMemRegionSize(MEMREGION_APPLICATION) < 100u * 1024 * 1024;
}

#endif
