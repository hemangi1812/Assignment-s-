#include <stdio.h>

int main (){
    float itemPrice, discountPercentage, discountedPrice, finalPrice;
    int ismember;

    printf("enter item price\n");
    scanf("%f", &itemPrice);

    printf("enter discount percentage\n");
    scanf("%f", &discountPercentage);

    printf("are you a member? ( 1 for yes, 0 for no)\n");
    scanf("%d", &ismember);

    discountedPrice = itemPrice * discountPercentage / 100;
    finalPrice = itemPrice - discountedPrice;

    if (ismember)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("FinalPrice = %.2f\n", finalPrice);

    return 0;
}