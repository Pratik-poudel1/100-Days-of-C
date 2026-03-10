// Write a program in C to find the sum of all even numbers and sum of all odd numbers between 1 and N separately.

# include <stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 += i;
        }
        else
        {
            sum2 += i;
        }
    }
    printf("Sum of even numbers: %d\n", sum1);
    printf("Sum of odd numbers: %d\n", sum2);
    return 0;
}