// Write a program in C to find the product of all digits of a given number.

# include <stdio.h>
int main()
{
    int n, i, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        i = n % 10;
        product = product * i;
        n = n / 10;
    }
    printf("The product of all digits of %d is %d", n, product);
    return 0;
}