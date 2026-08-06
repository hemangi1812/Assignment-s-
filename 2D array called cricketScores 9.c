#include <stdio.h>

int main() {
    // 2D array: rows = IPL matches, columns = runs scored by each team
    // Example: 4 matches, 2 teams per match
    int cricketScores[4][2] = {
        {187, 192}, // Match 1: MI vs CSK
        {205, 201}, // Match 2: RCB vs GT
        {156, 160}, // Match 3: KKR vs SRH
        {220, 218} // Match 4: PBKS vs RR
    };

    int matches = 4;
    int teams = 2;

    printf("Highest score from each IPL match:\n");

    // Loop through each match (row)
    for(int i = 0; i < matches; i++) {
        int highest = cricketScores[i][0]; // assume first team's score is highest

        // Compare with other teams in the same match
        for(int j = 1; j < teams; j++) {
            if(cricketScores[i][j] > highest) {
                highest = cricketScores[i][j];
            }
        }
        printf("Match %d: %d runs\n", i + 1, highest);
    }

    return 0;
}