#include <stdio.h>
#include <string.h> // needed for strcpy()

int main() {
    char source[] = "Flipkart"; // original string
    char shoppingApp[20]; // destination string, enough space

    // Copy source into shoppingApp
    strcpy(shoppingApp, source);

    printf("Value of shoppingApp: %s\n", shoppingApp);

    return 0;
}