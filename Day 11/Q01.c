// Write a program in C to find the HCF (GCD) of two given numbers using the Euclidean algorithm.

# include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF = %d", a);
    return 0;
}