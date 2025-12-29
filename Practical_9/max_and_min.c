#include <stdio.h>
// Name :- Alok Kumar
// ERP :- RU-25-10143
int main() {
    int arr[5] = {12, 5, 9, 20, 3};
    int max, min, i;

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

// Output :-
// Maximum element = 20
// Minimum element = 3