#include <stdio.h>

int main() {
    // 3 playlists, 5 days
    // rows = playlists, columns = days
    int playlistRatings[3][5] = {
        {4, 5, 3, 5, 4}, // Playlist 1: Chill Vibes
        {5, 4, 5, 5, 3}, // Playlist 2: Workout Mix
        {3, 3, 4, 2, 4} // Playlist 3: Lo-fi Beats
    };

    char *playlists[3] = {"Chill Vibes", "Workout Mix", "Lo-fi Beats"};
    char *days[5] = {"Mon", "Tue", "Wed", "Thu", "Fri"};

    printf("Ratings for '%s' over 5 days:\n", playlists[1]); // second playlist, index 1

    // Loop through columns of row 1
    for(int j = 0; j < 5; j++) {
        printf("%s: %d/5\n", days[j], playlistRatings[1][j]);
    }

    return 0;
}