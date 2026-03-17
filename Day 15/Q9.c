// Write a program in C to print a cross (+) pattern of * inside an N×N grid.

#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd number for rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' for the middle row OR the middle column
            if (i == (n / 2 + 1) || j == (n / 2 + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
