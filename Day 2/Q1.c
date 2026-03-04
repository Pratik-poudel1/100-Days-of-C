// Write a program in C to read two integers from the user and print their sum, difference, product, and quotient.

# include <stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Sum: %d\n",a+b);
    printf("Difference: %d\n",a-b);
    printf("Product: %d\n",a*b);
    printf("Quotient: %d\n",a/b);
    return 0;
}