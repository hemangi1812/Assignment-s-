#include <stdio.h>

struct Playlist {
    char title[50];
    char artist[50];
    int duration;
};

int main() {
    struct Playlist song = {"starboy", "weekend", 263};

    printf("Title: %s\nArtist: %s\nDuration: %d sec\n",
            song.title, song.artist, song.duration);

    return 0;
}