#include <stdio.h>
#include <string.h>

int main()
{
    char guess[30];
    char song[] = "Kesariya";

    printf("Guess the Song!\n");
    printf("Hint: Popular Bollywood song from Brahmastra.\n");

    do
    {
        printf("Enter Song Name: ");
        fgets(guess, sizeof(guess), stdin);

        guess[strcspn(guess, "\n")] = '\0';

        if(strcmp(guess, song) != 0)
        {
            printf("Wrong Guess! Try Again.\n");
        }

    } while(strcmp(guess, song) != 0);

    printf("Correct! You guessed the song.\n");

    return 0;
}