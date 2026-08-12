#include<stdio.h>
int main(){

    int orders[5]= {250, 0, 420, 180, 600}; // Zomato orders in ₹
    int *ptr= orders;// points to first element

    printf("Order amounts with addresses:\n");

    for(int i = 0; i < 5; i++) {
        printf("Amount: %d\n,Address: %p\n", *(ptr + i), (ptr + i));
        // ptr + i uses pointer arithmetic to move to next element
    }

    return 0;
}

