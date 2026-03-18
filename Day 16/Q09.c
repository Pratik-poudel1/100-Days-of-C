// Write a program in C to check whether a given number is a strong number (sum of factorial of digits = number).

# include <stdio.h>
int main()
{
    int n, i, sum = 0, temp, rem, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
        fact = 1;
    }
    if (temp == sum)
    {
        printf("%d is a strong number.", temp);
    }
    else
    {
        printf("%d is not a strong number.", temp);
    }
    return 0;
}