#include <stdio.h>

int main() {
    int days, i;
    float rainfall, total = 0, average;

    printf("Enter number of days: ");
    scanf("%d", &days);

    for (i = 1; i <= days; i++) {
        printf("Enter rainfall for day %d: ", i);
        scanf("%f", &rainfall);

        total += rainfall;
    }

    average = total / days;

    printf("\nTotal Rainfall: %.2f\n", total);
    printf("Average Rainfall: %.2f\n", average);

    return 0;
}
