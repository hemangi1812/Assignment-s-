#include<stdio.h>
int main(){

    int choice;
    printf(" enter your choice\n");
    printf(" 1. breakfast\n");
    printf(" 2. lunch\n");
    printf(" 3. dinner\n");
    printf(" 4. snacks\n");

    printf(" enter your choice\n");
    scanf("%d", &choice);


    switch (choice)
    {
        case 1:
        printf(" suggested dish: poha\n");
        break;

        case 2:
        printf(" suggested dish: dal chawal\n");
        break;

        case 3:
        printf(" suggested dish: Paneer Biryani\n");
        break;

        case 4:
        printf(" suggested dish; samosa\n");
        break;


        default:
        printf(" try some fruits\n");

    }
    return 0;
}