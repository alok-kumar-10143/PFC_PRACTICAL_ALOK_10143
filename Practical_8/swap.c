// Name :- Alok Kumar
// ERP :- RU-25-10143
#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;   
    *x = *y;     
    *y = temp;   
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}

// Output :
// Enter two numbers: 2 3 
// Before swapping: a = 2, b = 3
// After swapping:  a = 3, b = 2
