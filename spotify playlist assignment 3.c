#include <stdio.h>

int main()
{
    char playlistName[] = "Nostaligia";
    int totalSongs = 15;
    float averageDuration = 3.10;

    printf("My favorite Spotify playlist is \"%s\" \nwith %d songs and an average song duration is %.1f\ minutes.\n",
           playlistName, totalSongs, averageDuration);

}