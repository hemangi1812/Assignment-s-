#include <stdio.h>

int main() {
    int n = 4;  // grid size 4x4

    // Outer loop for rows
    for(int i = 0; i < n; i++) {
        // Inner loop for columns
        for(int j = 0; j < n; j++) {
            // If sum of row and col index is even -> print 0, else print 1
            if( (i + j) % 2 == 0 )
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n"); // new line after each row
    }

    return 0;
}