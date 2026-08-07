#include <stdio.h>
#include <string.h> // needed for strlen()

int main() {
    char songTitle[] = "Tum Hi Ho"; // declare and assign string

    int length = strlen(songTitle); // get length of string

    printf("Song Title: %s\n", songTitle);
    printf("Length: %d\n", length);

    return 0;
}