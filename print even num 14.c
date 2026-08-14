#include <stdio.h>

int main() {
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Check if number is divisible by 2
        if (i % 2 == 0) { // was =, fixed to ==
            printf("%d ", i);
        }
    }
    // Output: 2 4 6 8 10
    return 0;
}