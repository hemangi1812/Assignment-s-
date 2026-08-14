#include <stdio.h>

// Nested structure
struct Bio {
    char description[100];
    int age;
};

struct InstaProfile {
    char username[50];
    int followers;
    struct Bio profileBio; // nested
};

int main() {
    // Initialize with sample details - replace with yours
    struct InstaProfile me = {
        "code.with.raj",
        12500,
        {"C programmer | Coffee lover", 21}
    };

    // Display all fields
    printf("Instagram Profile\n");
    printf("------------------------\n");
    printf("Username : %s\n", me.username);
    printf("Followers : %d\n", me.followers);
    printf("Bio : %s\n", me.profileBio.description);
    printf("Age : %d\n", me.profileBio.age);

    return 0;
}