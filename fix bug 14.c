#include <stdio.h>

int main() {
    char *items[] = {"Burger", "Pizza", "Fries"};
    int prices[] = {120, 250, 90};
    int total = 0;
    int n = 3; // number of items

    // Loop and add each price to total
    for (int i = 0; i < n; i++) {
        total += prices[i]; // was =+, fixed to +=
    }

    printf("Total price is: %d\n", total); // Output: 460
    return 0;
}