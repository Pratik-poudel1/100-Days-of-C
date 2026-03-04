// Write a program in C to read the length and breadth of a rectangle and calculate its area and perimeter.

# include <stdio.h>

int main()
{
    float l,b,area,perimeter;
    printf("Enter Length: ");
    scanf("%f",&l);
    printf("Enter Breadth: ");
    scanf("%f",&b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("Area of the Rectangle is %.2f\n",area);
    printf("Perimeter of the Rectangle is %.2f\n",perimeter);
    return 0;
}