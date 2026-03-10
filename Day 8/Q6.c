// Write a program in C to find the sum of the series: S = 1 + 2 + 3 + ... + N.

# include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}