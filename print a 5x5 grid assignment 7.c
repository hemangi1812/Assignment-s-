#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    // Outer loop for rows
    for(int i = 0; i < rows; i++) {
        // Inner loop for columns
        for(int j = 0; j < cols; j++) {
            printf("📷 ");  // print emoji with a space
        }
        printf("\n");  // move to next line after each row
    }

    return 0;
}