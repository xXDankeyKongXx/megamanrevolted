#ifndef MM64_EXT_H
#define MM64_EXT_H

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// The port's own per-save data (things the game doesn't track): kept with each game save, in the
// unused tail of its flash slot, and in save states. A new game starts with it empty.
// Reaverbots defeated, by kind: a kind is the game's descriptor for that enemy (a pointer into the
// area's code, so the same Reaverbot in another area is another kind) plus the area.
#define MM64_EXT_KILL_KINDS 40
typedef struct {
    uint8_t area, used;
    uint16_t count;
    uint32_t desc;
} Mm64Kill;

typedef struct {
    uint32_t magic;          // MM64_EXT_MAGIC
    uint16_t version, size;  // size = sizeof(Mm64Ext)
    uint32_t dungeon_maps;   // Dig Scans found: bit per dungeon (dungeon_maps.h)
    uint32_t zenny_earned;   // all Zenny ever picked up
    uint32_t kills_total;    // all Reaverbots defeated
    uint32_t reserved[3];
    Mm64Kill kills[MM64_EXT_KILL_KINDS];
} Mm64Ext;

Mm64Ext* mm64_ext(void);        // the live data
void mm64_ext_reset(void);      // New Game
void mm64_ext_on_continue(void); // the title's Continue loaded a game save: take that slot's data
void mm64_ext_set(const Mm64Ext* in); // save state loaded (ignored if not valid)
void mm64_ext_tick(void);       // UI thread, every frame: counts Zenny picked up and Reaverbots defeated
int mm64_ext_take_found_map(void); // a dungeon map (Dig Scan) found since the last call, else -1

#ifdef __cplusplus
}
#endif

#endif
