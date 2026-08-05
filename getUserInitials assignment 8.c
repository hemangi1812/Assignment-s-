#include <stdio.h>
#include <string.h>
#include <ctype.h> // for toupper()

// Function to get initials
void getUserInitials(char name[], char initials[]) {
    int j = 0;

    // First character is always an initial
    initials[j++] = toupper(name[0]);

    // Find spaces and take the next character as initial
    for(int i = 1; name[i]!= '\0'; i++) {
        if(name[i] == ' ' && name[i+1]!= '\0') {
            initials[j++] = toupper(name[i+1]);
        }
    }
    initials[j] = '\0'; // null terminate the string
}

int main() {
    char name[] = "Virat Kohli"; // your favorite cricketer
    char initials[10]; // to store result like "VK"

    getUserInitials(name, initials);

    printf("Full Name: %s\n", name);
    printf("Initials: %s\n", initials);

    return 0;
}