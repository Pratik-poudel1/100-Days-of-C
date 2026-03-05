// Write a program in C to swap the values of two variables using a third temporary variable.

# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ")
    scanf("%d",&a);
    printf("Enter second number: ")
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d\n",a);
    printf("After swapping b=%d\n",b);
    return 0;
}