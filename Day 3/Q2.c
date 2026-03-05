// Write a program in C to swap the values of two variables without using a third variable.

# include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d\n",a);
    printf("After swapping b=%d\n",b);
    return 0;
}