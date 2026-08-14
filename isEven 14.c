#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is even
bool isEven(int num) {
    // If remainder when divided by 2 is 0, then even
    if (num % 2 == 0) {
        return true; // number is even
    } else {
        return false; // number is odd
    }
}

int main() {
    printf("%d\n", isEven(4)); // 1 for true
    printf("%d\n", isEven(7)); // 0 for false
    return 0;
}