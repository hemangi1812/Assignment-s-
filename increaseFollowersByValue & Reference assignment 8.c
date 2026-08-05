#include <stdio.h>

// 1. Pass by Value: gets a copy of followers
void increaseFollowersByValue(int followers) {
    followers = followers + 1000; // only changes the local copy
    printf("Inside increaseFollowersByValue: %d\n", followers);
}

// 2. Pass by Reference: gets address of followers using pointer
void increaseFollowersByReference(int *followers) {
    *followers = *followers + 1000; // changes the original variable
    printf("Inside increaseFollowersByReference: %d\n", *followers);
}

int main() {
    int followers = 5000;

    printf("Original followers: %d\n", followers);

    // Call pass-by-value
    increaseFollowersByValue(followers);
    printf("After increaseFollowersByValue: %d\n", followers); // unchanged

    // Call pass-by-reference
    increaseFollowersByReference(&followers); // pass address with &
    printf("After increaseFollowersByReference: %d\n", followers); // changed

    return 0;
}