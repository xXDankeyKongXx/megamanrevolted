#ifndef MM64_PATHS_H
#define MM64_PATHS_H

// The app's data folder on the SD card (saves, settings, logs). The Old 3DS build (make o3ds) is a
// separate app with its own folder, so the two keep their saves apart.
#ifdef MM64_O3DS
#define MM64_DATA_DIR "/3ds/mm64-o3ds"
#else
#define MM64_DATA_DIR "/3ds/mm64"
#endif
#define MM64_DATA_PATH "sdmc:" MM64_DATA_DIR

#endif
