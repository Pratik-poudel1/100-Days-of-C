// Write a program in C to find the sum of the series:
// S = x - x^3/3! + x^5/5! - x^7/7! ... to N terms

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j;
    double x, sum = 0, fact, term;
    printf("Enter value of x: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = 1;
        for(j = 1; j <= (2*i - 1); j++)
            fact = fact * j;
        term = pow(x, 2*i - 1) / fact;
        if(i % 2 == 0)
            sum = sum - term;
        else
            sum = sum + term;
    }
    printf("Sum of the series = %.4lf", sum);
    return 0;
}