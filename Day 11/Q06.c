// Write a program in C to convert a binary number to decimal.

# include <stdio.h>
int main()
{
    int num, decimal = 0, i = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * i;
        num = num / 10;
        i = i * 2;
    }
    printf("Decimal number: %d", decimal);
    return 0;
}