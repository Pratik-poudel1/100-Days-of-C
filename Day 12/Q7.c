// Write a program in C to find the sum of the series: S = 1 + x + x²/2! + x³/3! ... to N terms (exponential).

# include <stdio.h>
int main()
{
    int n, i;
    double x, sum = 1;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += x * pow(x, i) / factorial(i);
    }
    printf("Sum of the series: %.2lf\n", sum);
    return 0;
}