#include <stdio.h>

int main()
{
    const float GST_RATE = 18.0;   // Constant GST Rate

    float basePrice = 500.00; //price of the product
    float finalPrice;

    finalPrice = basePrice + (basePrice * GST_RATE / 100); // calculation unsing gst

    printf("Base Price = %.2f\n", basePrice);
    printf("GST Rate = %.2f%%\n", GST_RATE);
    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}