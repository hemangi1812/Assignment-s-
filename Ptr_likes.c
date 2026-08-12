#include <stdio.h>

int main() {
    int likes = 128;
    int *ptrLikes; // pointer variable

    ptrLikes = &likes; // point to likes

    printf("Value of likes: %d\n", likes);
    printf("Value via pointer: %d\n", *ptrLikes);
    printf("Address stored in ptrLikes: %p\n", ptrLikes);
    printf("Address of likes: %p\n", &likes);

    
}