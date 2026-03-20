// Write a program in C to find the Nth Fibonacci number using recursion.

# include <stdio.h>
int fib(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci number is %d", n, fib(n));
    return 0;
}