// Write a program in C to read a person's weight (kg) and height (m) and calculate their BMI(Body Mass Index).

# include <stdio.h>
# include <math.h>
int main()
{
    float w,h,bmi;
    printf("Enter Weight(kg):");
    scanf("%f",&w);
    printf("Enter Height(m):");
    scanf("%f",&h);
    bmi = w/ pow(h,2);
    printf("BMI is %.2f\n",bmi);
    return 0;
}