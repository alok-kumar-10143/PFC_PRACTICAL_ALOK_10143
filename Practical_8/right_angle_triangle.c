// Name :- Alok Kumar
// ERP :- RU-25-10143
#include <stdio.h>
void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
        printf("*");
        }
        printf("\n");
    }
}
int main() {
    int height;
    printf("Enter height of triangle: ");
    scanf("%d", &height);
    printTriangle(height);
    return 0;
}

// Output :
// Enter height of triangle: 5
// *
// **
// ***
// ****
// *****