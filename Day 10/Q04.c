// Write a program in C to print all perfect numbers between 1 and 1000.

# include <stdio.h>
int main()
{
    int num, i, sum = 0;
    for (num = 1; num <= 1000; num++)
    {
        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
                sum = sum + i;
        }
        if (sum == num)
            printf("%d\t", num);
        sum = 0;
    }
    return 0;
}