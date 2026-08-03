#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];

    printf("Enter Your Favorite IPL Team: ");
    fgets(team, sizeof(team), stdin);

    team[strcspn(team, "\n")] = '\0';

    if (strcmp(team, "Mumbai Indians") == 0)
        printf("Go Mumbai Indians!\n");

    else if (strcmp(team, "Chennai Super Kings") == 0)
        printf("Chennai Super Kings for the Win!\n");

    else if (strcmp(team, "Royal Challengers Bengaluru") == 0)
        printf("Ee Sala Cup Namde!\n");

    else if (strcmp(team, "Kolkata Knight Riders") == 0)
        printf("Korbo Lorbo Jeetbo!\n");

    else if (strcmp(team, "Gujarat Titans") == 0)
        printf("Aava De!\n");

    else
        printf("Team Not Found!\n");

    return 0;
}
 