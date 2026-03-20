// Write a program in C to find the power of a number (base^exp) using recursion.

# include <stdio.h>
int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}
int main()
{
    int base, exp;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);
    printf("The power of %d to the %d is %d", base, exp, power(base, exp));
    return 0;
}