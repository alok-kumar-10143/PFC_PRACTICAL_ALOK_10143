#include <stdio.h>
//Name :- Alok Kumar
//ERP :- RU-25-10143
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Original array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//Output :- 
// Original array:
// 1 2 3 4 5 
// Reversed array:
// 5 4 3 2 1 
