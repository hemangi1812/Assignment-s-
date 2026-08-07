#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    char username[6]; // 5 chars + 1 for '\0'

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = '\0'; // remove newline from fgets

    // Check length
    if(strlen(fullName) >= 5) {
        // Copy only first 5 characters
        strncpy(username, fullName, 5);
        username[5] = '\0'; // strncpy doesn't add \0 automatically
    } else {
        // If name is shorter than 5, copy full name
        strcpy(username, fullName);
    }

    printf("Generated username: %s\n", username);

    return 0;
}