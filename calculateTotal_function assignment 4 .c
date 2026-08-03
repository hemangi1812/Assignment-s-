#include<stdio.h>
int calculateTotal(int itemPrice, int quantity) {
    return itemPrice * quantity;
}

int main(){
    int itemPrice, quantity;
    printf("enter itemPrice\n");
    scanf("%d", &itemPrice);

    printf("enter quantity\n");
    scanf("%d", &quantity);
    int total = calculateTotal( itemPrice, quantity);
    printf("Total Bill Amount: ₹%d\n", total);
}