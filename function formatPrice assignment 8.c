#include <stdio.h>
#include <string.h>

// Function to format price: 1599 -> "₹1,599"
void formatPrice(int price, char result[]) {
    char temp[20];
    sprintf(temp, "%d", price); // convert int to string

    int len = strlen(temp);
    int commas = (len - 1) / 3; // how many commas needed
    int j = 0;

    result[j++] = '₹'; // rupee symbol

    for(int i = 0; i < len; i++) {
        result[j++] = temp[i];
        // add comma after every 3 digits from right, but not at the end
        if((len - i - 1) % 3 == 0 && i!= len - 1) {
            result[j++] = ',';
        }
    }
    result[j] = '\0'; // null terminate
}

int main() {
    int price1 = 1599;
    int price2 = 24999;
    int price3 = 799;

    char formatted1[20], formatted2[20], formatted3[20];

    formatPrice(price1, formatted1);
    formatPrice(price2, formatted2);
    formatPrice(price3, formatted3);

    printf("Product 1: Wireless Earbuds - %s\n", formatted1);
    printf("Product 2: Smart TV 43 inch - %s\n", formatted2);
    printf("Product 3: Backpack - %s\n", formatted3);

    return 0;
}