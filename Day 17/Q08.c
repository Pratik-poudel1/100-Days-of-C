// Write a program in C to convert Celsius to Fahrenheit using a user-defined function.

# include <stdio.h>
int celsius_to_fahrenheit(int celsius) 
{
    int fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}
int main() 
{
    int celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);
    int fahrenheit = celsius_to_fahrenheit(celsius);
    printf("%d degrees Celsius is equal to %d degrees Fahrenheit", celsius, fahrenheit);
    return 0;
}