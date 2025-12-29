#include <stdio.h>
// Name :- Alok Kumar
// ERP :- RU-25-10143
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0, i;

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
// Output :-
// Sum of even elements = 6
