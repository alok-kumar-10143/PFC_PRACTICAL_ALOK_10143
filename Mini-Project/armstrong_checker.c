#include <stdio.h>
// Name :- Alok Kumar
//ERP :- RU-25-10143
int main() {
    int num, temp, digit, sum = 0;
    int count = 0;
    int i, power;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("INVALID: Please enter a 3-digit number only.\n");
    } 
    else {
        temp = num;
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
        temp = num;
        while (temp != 0) {
            digit = temp % 10;

            power = 1;
            for (i = 1; i <= count; i++) {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }
        if (sum == num) {
            printf("RESULT: VALID (It is an Armstrong Number)\n");
        } else {
            printf("RESULT: INVALID (It is NOT an Armstrong Number)\n");
        }
    }
    return 0;
}
//Output :-
// Enter a 3-digit number: 564
// RESULT: INVALID (It is NOT an Armstrong Number)