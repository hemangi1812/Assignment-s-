#include <stdio.h>

// Nested structure
struct Time {
    int hours;
    int minutes;
};

struct MovieShow {
    char Movie[50];
    int Screen;
    struct Time showTime; // nested structure
};

int main() {
    // Create and initialize
    struct MovieShow show1 = {
        "Jawan",
        4,
        {9, 30} // hours, minutes
    };

    // Print in required format
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
            show1.Movie,
            show1.Screen,
            show1.showTime.hours,
            show1.showTime.minutes);

    return 0;
}

