// Write a program in C to read a temperature value in Celsius and convert it to both Fahrenheit and Kelvin.

# include <stdio.h>
# include <math.h>
int main()
{
    float c,f,k;
    printf("Enter Temperature in Celsius:");
    scanf("%f",&c);
    f = (c * 9/5) + 32;
    k = c + 273.15;
    printf("Temperature in Fahrenheit is %.2f\n",f);
    printf("Temperature in Kelvin is %.2f\n",k);
    return 0;
}