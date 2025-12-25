// Name :- Alok Kumar
// ERP :- RU-25-10143
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum = sum + i;
    }
    printf("Sum of even numbers from 1 to %d is %d\n", n, sum);
    return 0;
}

// Output :
// Enter a positive number: 10
// Sum of even numbers from 1 to 10 is 30
