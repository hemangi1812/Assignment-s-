#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 21)
    {
        printf("Eligible for Driving License\n");
        printf("Eligible for Credit Card\n");
    }
    else if (age >= 18)
    {
        printf("Eligible for Driving License\n");
        printf("Not Eligible for Credit Card\n");
    }
    else
    {
        printf("Not Eligible for Driving License\n");
        printf("Not Eligible for Credit Card\n");
    }

    return 0;
}