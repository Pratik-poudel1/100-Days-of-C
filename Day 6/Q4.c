// Write a program in C to read three sides of a triangle and check whether it is equilateral, isosceles, or scalene.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral");
    else if (a == b || b == c || c == a)
        printf("Isosceles");
    else
        printf("Scalene");
    return 0;
}