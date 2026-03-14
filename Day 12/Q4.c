// Write a program in C to find the sum of the Fibonacci series up to N terms.

# include <stdio.h>
int main()
{
    int n,i,fib1=0,fib2=1,fib3,sum=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d, ",fib1);
        fib3=fib1+fib2;
        fib1=fib2;
        fib2=fib3;
        sum=sum+fib3;
    }
    printf("\nSum of the series: %d",sum);
    return 0;
}