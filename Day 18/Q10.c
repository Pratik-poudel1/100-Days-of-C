// Write a program in C to check whether a number is prime using recursion.

# include <stdio.h>
int prime(int n, int i)
{
    if (n == i)
        return 1;
    if (n % i == 0)
        return 0;
    prime(n, i + 1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (prime(n, 2))
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
    return 0;
}