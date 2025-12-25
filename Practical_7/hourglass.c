// Name :- Alok Kumar
// ERP :- RU-25-10143
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int size = 2 * n - 1; 

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
        printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
        printf("*");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
        printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Output :
// Enter n: 5
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********