#include<stdio.h>
int main(){

    int likes, comments, shares;
    
    printf("enter likes\n");
    scanf("%d", &likes);

    printf("enter comments\n");
    scanf("%d", &comments);

    printf("enter shares\n");
    scanf("%d", &shares);

    if ((likes >= 1000) || (comments > 500 && shares > 100))
     printf("Trending Post\n");

     else 
     printf(" post is not trending");

     return 0;
    

}