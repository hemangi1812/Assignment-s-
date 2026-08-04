#include <stdio.h>
#include <string.h>

int main()
{
    int choice = 0;
    char team1[30] = "Mumbai Indians";
    char team2[30] = "Chennai Super Kings";
    char team3[30] = "Royal Challengers Bengaluru";
    char newTeam[30];

    while(choice != 3)
    {
        printf("\n===== IPL MENU =====\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        getchar(); // Clear newline from input buffer

        switch(choice)
        {
            case 1:
                printf("\nFavorite Teams:\n");
                printf("1. %s\n", team1);
                printf("2. %s\n", team2);
                printf("3. %s\n", team3);
                break;

            case 2:
                printf("Enter New Team Name: ");
                fgets(newTeam, sizeof(newTeam), stdin);

                newTeam[strcspn(newTeam, "\n")] = '\0';

                printf("New Team Added: %s\n", newTeam);
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}