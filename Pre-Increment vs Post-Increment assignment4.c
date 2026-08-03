#include<stdio.h>

int main(){
    int  followercount = 1000;

    printf(" initial value =%d\n", followercount);

    printf("pre increment =%d\n", ++followercount);
    printf(" value after pre increment =%d\n", followercount);
    
    printf(" post increment =%d\n", followercount++);
    printf(" value after post increment =%d\n", followercount);

    return 0;
}