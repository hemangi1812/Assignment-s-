#include <stdio.h>

// Function to calculate average spend for the week
// Takes array and its length, returns average as float
float calculateWeeklyAverage(int orders[], int days) {
    int sum = 0;

    // Loop to sum all values
    for(int i = 0; i < days; i++) {
        sum += orders[i];
    }

    // Divide by number of days and return
    return (float)sum / days;
}

int main() {
    // 1D array: daily Zomato order amounts for 7 days
    int dailyOrders[7] = {250, 0, 420, 180, 600, 350, 0}; // Mon to Sun in ₹

    float average = calculateWeeklyAverage(dailyOrders, 7);

    printf("Daily Zomato orders: ");
    for(int i = 0; i < 7; i++) {
        printf("₹%d ", dailyOrders[i]);
    }
    printf("\n");

    printf("Total spend this week: ₹%d\n", 250+0+420+180+600+350+0);
    printf("Average spend per day: ₹%.2f\n", average);

    return 0;
}