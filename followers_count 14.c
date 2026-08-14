#include <stdio.h>

// Function to format follower count like Instagram
void formatFollowersCount(int count) {
    // If 1 million or more
    if (count >= 1000000) {
        printf("%.1fM\n", count / 1000000.0);
    }
    // If 1000 or more
    else if (count >= 1000) {
        printf("%.1fK\n", count / 1000.0);
    }
    // Less than 1000
    else {
        printf("%d\n", count);
    }
}

int main() {
    formatFollowersCount(1500); // 1.5K
    formatFollowersCount(1200000); // 1.2M
    formatFollowersCount(950); // 950
    return 0;
}