#include <stdio.h>
#include <string.h> // needed for strcmp

int main() {
    char username1[50];
    char username2[50];

    // Take input for two usernames
    printf("Enter first username: ");
    fgets(username1, sizeof(username1), stdin);
    username1[strcspn(username1, "\n")] = '\0'; // remove newline from fgets

    printf("Enter second username: ");
    fgets(username2, sizeof(username2), stdin);
    username2[strcspn(username2, "\n")] = '\0'; // remove newline

    // Compare using strcmp
    int result = strcmp(username1, username2);

    if(result == 0) {
        printf("Both usernames are the same.\n");
    } else {
        printf("Usernames are different.\n");
    }

    return 0;
}