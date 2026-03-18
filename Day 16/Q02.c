// Write a program in C to read N numbers and find their standard deviation.

#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float x, sum = 0, mean, dev = 0, sd;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // First pass: sum
    for(i = 1; i <= n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%f", &x);
        sum += x;
    }
    mean = sum / n;
    // Second pass: deviation (re-enter values)
    printf("\nRe-enter the same elements:\n");
    for(i = 1; i <= n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%f", &x);
        dev += (x - mean) * (x - mean);
    }
    sd = sqrt(dev / n);
    printf("\nStandard Deviation = %.2f", sd);
    return 0;
}