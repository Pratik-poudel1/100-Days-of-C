// Write a program in C to read the base and height of a triangle and calculate its area.

# include <stdio.h>
int main()
{
    float b,h,area;
    printf("Enter Base and Height of the Triangle: ");
    scanf("%f%f",&b,&h);
    area = 0.5*b*h;
    printf("Area of the Triangle is %.2f\n",area);
    return 0;
}