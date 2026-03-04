// Write a program in C to read the radius of a circle from the user and calculate its area and circumference.

# include <stdio.h>
# define PI 3.141592654
int main()
{
    float r,area,circumference;
    printf("Enter Radius: ");
    scanf("%f",&r);
    area = PI * r *r ;
    circumference = 2*PI*r;
    printf("Area of the Circle is %.2f\n",area);
    printf("Circumference of the Circle is %.2f\n",circumference);
    return 0;
}