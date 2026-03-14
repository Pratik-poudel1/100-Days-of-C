// Write a program in C to find the sum of the series:
// S = 1 - x^2/2! + x^4/4! - x^6/6! ... to N terms

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j;
    double x, sum = 1, fact, term;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = 1;
        for(j = 1; j <= 2*i; j++)
            fact = fact * j;
        term = pow(x, 2*i) / fact;
        if(i % 2 == 0)
            sum = sum + term;
        else
            sum = sum - term;
    }
    printf("Sum of the series = %.4lf", sum);
    return 0;
}