#include <stdio.h>

int main() {
    int n;  // number of rows

    // Take input from user
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {
        
        // First inner loop: print spaces for centering
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Second inner loop: print stars
        for(int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n"); // move to next line
    }

    return 0;
}