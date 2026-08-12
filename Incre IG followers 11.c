#include <stdio.h>

void incrementFollowers(int *followers, int n) {
    for(int i = 0; i < n; i++) {
        *(followers + i) = *(followers + i) + 100; // pointer arithmetic
    }
}

int main() {
    int instaFollowers[5] = {1200, 5400, 320, 9800, 450}; // 5 friends

    printf("Before: ");
    for(int i = 0; i < 5; i++) printf("%d ", instaFollowers[i]);

    incrementFollowers(instaFollowers, 5); // array name is address of first element

    printf("\nAfter +100: ");
    for(int i = 0; i < 5; i++) printf("%d ", instaFollowers[i]);

    return 0;
}