// Entry-Controlled Loop (for / while
#include <stdio.h>

int main()
{
    int i = 5;

    while(i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    printf("Loop Finished");

    return 0;
}

//exit-Controlled Loop (do-while)

//The do block executes before checking the condition.
Even though i < 5 is false, the loop executes once.
do-while is an exit-controlled loop. //
/* 
#include <stdio.h>
 
int main()
{
    int i = 5;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i < 5);

    return 0;
}
