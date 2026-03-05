// Write a program in C to read two numbers and print their quotient and remainder using / and % operators.

#include <stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("Quotient: %d\n",q);
    printf("Remainder: %d\n",r);
    return 0;
}