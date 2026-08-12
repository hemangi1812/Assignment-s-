#include<stdio.h>

void swap_num( int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
    int playlist1 = 42; // song in workout
    int playlist2 = 67; // song in chill vibe


    printf("before swap playlist1 \n");
    printf("playlist1 = %d\n",playlist1);
    printf("playlist2 = %d\n",playlist2);
    swap_num(&playlist1, &playlist2);

    printf("after swapping \n");
    printf("playlist1 = %d\n",playlist1);
    printf("playlist2 = %d\n",playlist2);
    

}