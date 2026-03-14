// Write a program in C to find the Nth Fibonacci number.

#include <stdio.h>
int main()
{
    int n,i,fib1=0,fib2=1,fib3;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n==1)
        printf("Nth Fibonacci number = %d", fib1);
    else if(n==2)
        printf("Nth Fibonacci number = %d", fib2);
    else
    {
        for(i=3;i<=n;i++)
        {
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;
        }

        printf("Nth Fibonacci number = %d", fib3);
    }
    return 0;
}