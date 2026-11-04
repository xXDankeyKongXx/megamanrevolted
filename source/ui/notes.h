// Player notes for the bottom screen's Notes page: text plus where and when each was written.
// Stored on the SD card as one line per note, separate from the game's save.
#ifndef NOTES_H
#define NOTES_H

#include <stdbool.h>
#include <time.h>

#define NOTES_MAX 64
#define NOTE_TEXT_MAX 400

typedef struct {
    char text[NOTE_TEXT_MAX];
    int area;            // the game's stage number when written
    char area_name[24];  // its name, e.g. "Apple Market"
    time_t written;      // console clock
} Note;

typedef struct {
    Note items[NOTES_MAX];
    int count;
} Notes;

void notes_load(Notes* notes, const char* path);
bool notes_save(const Notes* notes, const char* path);

#endif
