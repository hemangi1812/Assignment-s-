#include <stdio.h>

int main() {
    int n = 5;  // number of rows, change this for bigger leaderboard

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {
        // Inner loop for numbers in each row
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);  // print rank number
        }
        printf("\n");  // move to next line
    }

    return 0;
}