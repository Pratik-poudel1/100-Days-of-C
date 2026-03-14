// Write a program in C to find the sum of the series: S = 1 - 2 + 3 - 4 + 5 - 6 ... to N terms.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("Sum of the series = %d", sum);
    return 0;
}