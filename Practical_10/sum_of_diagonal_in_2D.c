#include <stdio.h>
// Name :- Alok Kumar
// ERP :- RU-25-10143
int main() {
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int sum = 0, i;

    for (i = 0; i < 3; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
// Output :-
// Sum of diagonal elements = 15

