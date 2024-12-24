#include <stdio.h>

#define DAYS_IN_MONTH 30

int main() {
    // Declare an array to store temperatures and variables for analysis
    float temperatures[DAYS_IN_MONTH];
    float sum = 0.0, average;
    float maxTemp, minTemp;
    int maxDay = 0, minDay = 0, daysAboveAverage = 0;

    // Input temperatures for the month
    printf("Enter the temperatures for %d days:\n", DAYS_IN_MONTH);
    for (int i = 0; i < DAYS_IN_MONTH; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];
    }

    // Calculate average temperature
    average = sum / DAYS_IN_MONTH;

    // Initialize max and min temperatures
    maxTemp = minTemp = temperatures[0];

    // Find max, min temperatures and their respective days
    for (int i = 1; i < DAYS_IN_MONTH; i++) {
        if (temperatures[i] > maxTemp) {
            maxTemp = temperatures[i];
            maxDay = i;
        }
        if (temperatures[i] < minTemp) {
            minTemp = temperatures[i];
            minDay = i;
        }
    }

    // Count days above average temperature
    for (int i = 0; i < DAYS_IN_MONTH; i++) {
        if (temperatures[i] > average) {
            daysAboveAverage++;
        }
    }

    // Display results
    printf("\n--- Temperature Analysis ---\n");
    printf("Average Temperature: %.2f\n", average);
    printf("Maximum Temperature: %.2f on Day %d\n", maxTemp, maxDay + 1);
    printf("Minimum Temperature: %.2f on Day %d\n", minTemp, minDay + 1);
    printf("Number of Days Above Average Temperature: %d\n", daysAboveAverage);

    return 0;
}