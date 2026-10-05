#include <stdio.h>
int main() 
{
    int correctPIN = 1234;
    int enteredPIN;
    printf("Enter your ATM PIN: ");
    scanf("%d", &enteredPIN);
    if (enteredPIN == correctPIN) {
        printf("PIN verified successfully.\n");
        printf("Welcome to the ATM.\n");
    } else {
        printf("Incorrect PIN.\n");
    }
    return 0;
}
