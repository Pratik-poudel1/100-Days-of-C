// Write a program in C to generate all prime numbers between a given minimum and maximum range.

#include <stdio.h>

int main()
{
    int max, min, isprime, i, j;
    printf("Enter the minimum and maximum range: ");
    scanf("%d%d", &min, &max);
    for(i = min; i <= max; i++)
    {
        isprime = 1;
        if(i < 2)
            continue;

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime == 1)
            printf("%d ", i);
    }
    return 0;
}