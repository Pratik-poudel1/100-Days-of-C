// Write a program in C to print all Armstrong numbers between 1 and 1000.

# include <stdio.h>
int main()
{
    int i, num, rem, sum = 0;
    for (i = 1; i <= 1000; i++)
    {
        num = i;
        sum = 0;
        while (num != 0)
        {
            rem = num % 10;
            sum = sum + rem * rem * rem;
            num = num / 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}