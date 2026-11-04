// Save states for the bottom screen's System tab: three slots on the SD card.
//
// A slot holds the game's own save image (what it writes to flash: progress, items, Zenny, the
// area and Mega Man's position) taken at the moment of saving, plus a little metadata. Loading
// restarts the game's main process into its "continue" routine with that image, the way the
// title screen's Continue does. See mm64_savestate.cpp for why it isn't a full memory snapshot.
#ifndef MM64_SAVESTATE_H
#define MM64_SAVESTATE_H

#include <stdbool.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MM64_SAVE_SLOTS 3

typedef struct {
    bool used;
    char area_name[32];
    time_t saved;
} Mm64SlotInfo;

typedef enum {
    MM64_SAVESTATE_IDLE,     // nothing pending
    MM64_SAVESTATE_WAITING,  // waiting for gameplay (the request runs during the game's HUD pass)
    MM64_SAVESTATE_DONE,     // last request finished
    MM64_SAVESTATE_FAILED,   // last request failed (SD error, empty slot)
} Mm64SaveStateStatus;

void mm64_savestate_init(const char* data_path);
bool mm64_slot_info(int slot, Mm64SlotInfo* out);
// Queue a save into / load from a slot (0..2); runs on the game thread during the next gameplay frame.
bool mm64_request_save(int slot);
bool mm64_request_load(int slot);
Mm64SaveStateStatus mm64_savestate_status(void);
// Drops a request that hasn't started (e.g. asked for outside gameplay).
void mm64_savestate_cancel(void);
// Call once per UI frame: writes finished saves to the SD card.
void mm64_savestate_update(void);

#ifdef __cplusplus
}
#endif

#endif
