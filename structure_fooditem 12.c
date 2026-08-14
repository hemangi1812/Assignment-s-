#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    // Array of 3 FoodItem variables
    struct FoodItem menu[3] = {
        {"Butter Chicken", 299.50, 4.6},
        {"Margherita Pizza", 249.00, 4.3},
        {"Veg Biryani", 189.99, 4.5}
    };

    printf("Zomato Menu:\n");
    printf("-------------------------------\n");

    // Display using loop
    for(int i = 0; i < 3; i++) {
        printf("Item %d:\n", i + 1);
        printf("Name : %s\n", menu[i].itemName);
        printf("Price : ₹%.2f\n", menu[i].price);
        printf("Rating : %.1f ⭐\n\n", menu[i].rating);
    }

    return 0;
}