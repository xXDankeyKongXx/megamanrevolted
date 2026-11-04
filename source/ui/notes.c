#include "notes.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// File format: one note per line, tab-separated: area number, area name, written (unix time), text.
// The text escapes backslash, tab and newline as \\, \t and \n.

static void write_escaped(FILE* f, const char* text) {
    for (; *text; text++) {
        switch (*text) {
            case '\\': fputs("\\\\", f); break;
            case '\t': fputs("\\t", f); break;
            case '\n': fputs("\\n", f); break;
            default: fputc(*text, f); break;
        }
    }
}

static void unescape(char* dst, size_t dst_size, const char* src) {
    size_t n = 0;
    for (; *src && n + 1 < dst_size; src++) {
        char c = *src;
        if (c == '\\' && src[1]) {
            src++;
            c = *src == 'n' ? '\n' : *src == 't' ? '\t' : *src;
        }
        dst[n++] = c;
    }
    dst[n] = '\0';
}

void notes_load(Notes* notes, const char* path) {
    notes->count = 0;
    FILE* f = fopen(path, "r");
    if (!f) return;
    static char line[NOTE_TEXT_MAX * 2 + 128];
    while (notes->count < NOTES_MAX && fgets(line, sizeof(line), f)) {
        line[strcspn(line, "\r\n")] = '\0';
        Note* note = &notes->items[notes->count];
        long long written = 0;
        int text_at = 0;
        if (sscanf(line, "%d\t%23[^\t]\t%lld\t%n", &note->area, note->area_name, &written, &text_at) < 3 || text_at == 0) {
            continue;
        }
        note->written = (time_t)written;
        unescape(note->text, sizeof(note->text), line + text_at);
        notes->count++;
    }
    fclose(f);
}

bool notes_save(const Notes* notes, const char* path) {
    // Write a temporary file and rename it over the old one, so a crash never leaves half a file.
    char tmp[256];
    snprintf(tmp, sizeof(tmp), "%s.tmp", path);
    FILE* f = fopen(tmp, "w");
    if (!f) return false;
    for (int i = 0; i < notes->count; i++) {
        const Note* note = &notes->items[i];
        fprintf(f, "%d\t%s\t%lld\t", note->area, note->area_name[0] ? note->area_name : "Unknown", (long long)note->written);
        write_escaped(f, note->text);
        fputc('\n', f);
    }
    bool ok = fclose(f) == 0;
    if (ok) {
        remove(path);
        ok = rename(tmp, path) == 0;
    }
    return ok;
}
