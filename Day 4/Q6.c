// Write a program in C to check whether a number is odd or even using the conditional (ternary) operator.

# include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    (num%2==0)?printf("%d is Even Number",num):printf("%d is Odd Number",num);
    return 0;
}