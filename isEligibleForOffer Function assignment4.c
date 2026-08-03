#include<stdio.h>
int isEligibleForOffer( int age, int ordervalue)
{
    if (age >=18 && ordervalue >= 500)

        return 1;
    else
        return 0;
    
    }

    int main(){
        int age;
        float ordervalue;

        printf(" enter age:\n");
        scanf("%d", &age);

        printf(" enter ordervalue:\n");
        scanf("%f", &ordervalue);

if (isEligibleForOffer (age, ordervalue))
printf("Eligible for offer\n");

else
printf("Not Eligible for offer\n");

return 0;


    }