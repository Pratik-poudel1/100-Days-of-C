// Write a program in C to display the values of integer, float, and character variables using printf().

#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf(" %c", &c);
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %f\n", b);
    printf("The value of c is: %c\n", c);
    return 0;
}