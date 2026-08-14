#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower

// helper: convert string to lowercase for case-insensitive check
void toLowerStr(char *str) {
    for(int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

int main() {
    FILE *fp;
    char song[100];

    // 1. Create playlist.txt and write top 3 songs - write mode "w"
    fp = fopen("playlist.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fprintf(fp, "Blinding Lights\n");
    fprintf(fp, "Perfect\n");
    fprintf(fp, "Shape of You\n");
    fclose(fp);
    printf("Step 1: 3 songs written to playlist.txt\n");

    // 2. Read and display each song - read mode "r"
    fp = fopen("playlist.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    printf("Step 2: Songs in playlist:\n");
    while(fgets(song, sizeof(song), fp)!= NULL) {
        printf("%s", song); // fgets keeps \n
    }
    fclose(fp);
    printf("\n");

    // 3. Append 2 more songs - append mode "a"
    fp = fopen("playlist.txt", "a");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fprintf(fp, "All of Me\n");
    fprintf(fp, "Love Yourself\n");
    fclose(fp);
    printf("Step 3: 2 more songs appended\n");

    // 4. Read and print only songs containing "love" - case insensitive
    fp = fopen("playlist.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    printf("Step 4: Songs containing 'love':\n");
    while(fgets(song, sizeof(song), fp)!= NULL) {
        char temp[100];
        strcpy(temp, song);
        toLowerStr(temp); // convert to lowercase

        if(strstr(temp, "love")!= NULL) { // 'in' equivalent in C
            printf("%s", song);
        }
    }
    fclose(fp);

    return 0;
}