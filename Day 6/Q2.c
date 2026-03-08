// Write a program in C to solve a quadratic equation ax²+bx+c=0 and display all roots including complex roots.

#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, discriminant, realPart, imagPart, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 =  %.2lf\n", root2);
    } 
    else if (discriminant == 0) 
    {
        root1 = -b / (2 * a);
        printf("Root1 = Root2 = %.2lf\n", root1);
    } 
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }
    return 0;
}