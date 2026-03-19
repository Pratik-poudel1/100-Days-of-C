// Write a program in C to calculate the power of a number (base^exp) using a user-defined function.

include <stdio.h>
int power(int base, int exp) 
{
    int result = 1;
    for (int i = 0; i < exp; i++) 
    {
        result *= base;
    }
    return result;
}
int main() {
    int base, exp;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);
    int result = power(base, exp);
    printf("%d^%d = %d", base, exp, result);
    return 0;
}