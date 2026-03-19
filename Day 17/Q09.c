// Write a program in C to find the factorial of a number using a user-defined function.

# include <stdio.h>
int factorial(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++) 
    {
        fact *= i;
    }
    return fact;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("The factorial of %d is %d", num, fact);
    return 0;
}