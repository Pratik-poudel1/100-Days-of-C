// Write a program in C to find the GCD of two numbers using a user-defined function.

# include <stdio.h>
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int gcd = gcd(num1, num2);
    printf("The GCD of %d and %d is %d", num1, num2, gcd);
    return 0;
}