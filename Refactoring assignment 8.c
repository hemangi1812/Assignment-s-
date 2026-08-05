#include <stdio.h>
#include <string.h>
#include <ctype.h> // for toupper, tolower

// Generic function: Capitalize first letter of any string
void capitalizeFirstLetter(char str[]) {
    if(str[0]!= '\0') {
        str[0] = toupper(str[0]); // capitalize first char
    }

    // make rest of the letters lowercase
    for(int i = 1; str[i]!= '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char product1[] = "iphone 14 pro";
    char product2[] = "SAMSUNG TV";
    char username1[] = "virat kohli";
    char username2[] = "MSDHONI";

    // Reuse the same function for products and usernames
    capitalizeFirstLetter(product1);
    capitalizeFirstLetter(product2);
    capitalizeFirstLetter(username1);
    capitalizeFirstLetter(username2);

    printf("Product 1: %s\n", product1); // Iphone 14 pro
    printf("Product 2: %s\n", product2); // Samsung tv
    printf("Username 1: %s\n", username1); // Virat kohli
    printf("Username 2: %s\n", username2); // Msdhoni

    return 0;
}