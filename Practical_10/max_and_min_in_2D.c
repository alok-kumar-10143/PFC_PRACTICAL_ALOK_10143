#include <stdio.h>
// Name :- Alok Kumar
// ERP :- RU-25-10143
int main() {
    int a[2][2] = {{1, 4}, {7, 2}};
    int max = a[0][0], min = a[0][0];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
// Output :-
// Maximum = 7
// Minimum = 1

