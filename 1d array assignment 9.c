#include <stdio.h>

int main() {
    // 1D array with 7 elements for each day of the week
    int dailySteps[7] = {8450, 10230, 6700, 12000, 9500, 15000, 7800};
    // Mon, Tue, Wed, Thu, Fri, Sat, Sun

    char *days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    printf("Your step count for the week:\n");

    // Loop to print each value
    for(int i = 0; i < 7; i++) {
        printf("%s: %d steps\n", days[i], dailySteps[i]);
    }

    return 0;
}