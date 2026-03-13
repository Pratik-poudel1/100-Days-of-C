// Write a program in C to find the GCD of three numbers.

# include <stdio.h>
int main()
{
    int a, b, c, temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    while (c != 0)
    {
        temp = c;
        c = a % c;
        a = temp;
    }
    printf("GCD = %d", a);
    return 0;
}