// Name :- Alok Kumar
// ERP :- RU-25-10143
#include <stdio.h>

int main() {
    int pin, entPin;
    int attempts = 0;
    int maxAttempts = 3;
    pin = 1234;
    while (attempts < maxAttempts) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &entPin);

        if (entPin == pin) {
        printf("Authentication successful! Access granted.\n");
            return 0;  
        } else {
        printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }
    printf("Too many incorrect attempts. Your card is blocked.\n");
    return 0;
}

// Output :
// Enter your ATM PIN: 1234
//  Authentication successful! Access granted.
