#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10
#define MAX_NAME 50

// Function to add product to cart
// cart[][] is passed as pointer, and itemCount is passed by reference using *
void addToCart(char cart[MAX_ITEMS][MAX_NAME], int *itemCount, char product[]) {
    if(*itemCount < MAX_ITEMS) {
        strcpy(cart[*itemCount], product); // add product at next index
        (*itemCount)++; // increase count

        printf("Added: %s\n", product);
        printf("Updated Cart: ");
        for(int i = 0; i < *itemCount; i++) {
            printf("%s", cart[i]);
            if(i < *itemCount - 1) printf(", ");
        }
        printf("\n\n");
    } else {
        printf("Cart is full!\n");
    }
}

int main() {
    char cart[MAX_ITEMS][MAX_NAME]; // 2D array to store product names
    int itemCount = 0; // keeps track of how many items are in cart

    // Add products
    addToCart(cart, &itemCount, "Wireless Headphones");
    addToCart(cart, &itemCount, "Nike Shoes");
    addToCart(cart, &itemCount, "Coffee Mug");

    // Show final cart outside the function
    printf("Final Cart outside function: ");
    for(int i = 0; i < itemCount; i++) {
        printf("%s", cart[i]);
        if(i < itemCount - 1) printf(", ");
    }
    printf("\n");

    return 0;
}