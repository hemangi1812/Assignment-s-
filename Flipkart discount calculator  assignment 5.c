#include <stdio.h>

int main()
{
    float amount;

    printf("Enter Total Cart Amount: ");
    scanf("%f", &amount);

    if (amount > 1000)
    {
        if (amount > 2000)
        {
            amount = amount - (amount * 20 / 100);
            printf("20%% Discount Applied\n");
        }
        else
        {
            amount = amount - (amount * 10 / 100);
            printf("10%% Discount Applied\n");
        }
    }
    else
    {
        printf("No Discount Applied\n");
    }

    printf("Final Amount = %.2f\n", amount);

    return 0;
}