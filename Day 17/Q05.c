// Write a program in C to check whether a number is prime using a user-defined function that returns 1 or 0.

# include <stdio.h>
int is_prime(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num) == 1)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    return 0;
}