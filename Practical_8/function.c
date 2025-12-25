// Name :- Alok Kumar
// ERP :- RU-25-10143
#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;    
        n = n / 10;
    }
    return sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = sumOfDigits(num);
    printf("Sum of digits of %d is %d\n", num, result);
    return 0;
}

// Output :
// Enter a number: 123
// Sum of digits of 123 is 6
