#include <stdio.h>
int main() {
    float bill, tip, total, perPerson;
    int people;
    printf("Enter bill amount: ");
    scanf("%f", &bill);
    printf("Enter tip amount: ");
    scanf("%f", &tip);
    printf("Enter number of people: ");
    scanf("%d", &people);
    total = bill + tip;
    perPerson = total / people;
    printf("\nTotal Bill: %.2f\n", total);
    printf("Amount per person: %.2f\n", perPerson);
    return 0;
}
