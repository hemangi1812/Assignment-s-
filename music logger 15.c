#include <stdio.h>

int main() {
    int min[7];
    int choice, total, max;
    FILE *fp;

    while(1) {
        printf("\n1.Log 2.Report 3.Reset 4.Exit\nChoice: ");
        scanf("%d", &choice);

        if(choice == 1) { // Log minutes
            printf("Enter minutes for 7 days:\n");
            for(int i = 0; i < 7; i++) scanf("%d", &min[i]);

            fp = fopen("music_log.txt", "w"); // save
            for(int i = 0; i < 7; i++) fprintf(fp, "%d\n", min[i]);
            fclose(fp);
            printf("Saved!\n");
        }
        else if(choice == 2) { // Report
            fp = fopen("music_log.txt", "r");
            if(fp == NULL) { printf("No data found!\n"); continue; }

            total = 0; max = 0;
            for(int i = 0; i < 7; i++) {
                fscanf(fp, "%d", &min[i]);
                total += min[i];
                if(min[i] > max) max = min[i];
                printf("Day %d: %d min\n", i+1, min[i]);
            }
            fclose(fp);
            printf("Total: %d Avg: %.1f Highest: %d\n", total, total/7.0, max);
        }
        else if(choice == 3) { // Reset
            char c;
            printf("Confirm reset y/n: ");
            scanf(" %c", &c);
            if(c == 'y') {
                fp = fopen("music_log.txt", "w"); // clear file
                fclose(fp);
                printf("Data reset!\n");
            }
        }
        else if(choice == 4) break;
        else printf("Invalid choice\n");
    }
    return 0;
}