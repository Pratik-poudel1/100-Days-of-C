// Write a program in C to check whether a given number is a Fibonacci number or not.

#include <stdio.h>

int main()
{
    int num, fib1 = 0, fib2 = 1, fib3;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(fib2 < num)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    if(num == fib2 || num == fib1)
        printf("%d is a Fibonacci number.", num);
    else
        printf("%d is not a Fibonacci number.", num);
    return 0;
}