// Name :- Alok Kumar
// ERP :- RU-25-10143
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number a: ");
    scanf("%d", &a);
    printf("Enter last number b: ");
    scanf("%d", &b);

    for(int i = a; i <= b; i++) {
    printf("%d\n", i);
    }
    return 0;
}
// Output :
// Enter first number a: 1
// Enter last number b: 5
// 1
// 2
// 3
// 4
// 5

