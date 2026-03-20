// Write a program in C to find the GCD of two numbers using recursion (Euclidean algorithm).

# include <stdio.h>
int GCD (int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD (b, a % b);
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The GCD of %d and %d is %d", a, b, GCD(a, b));
    return 0;
}