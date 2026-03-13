// Write a program in C to convert an octal number to decimal.

# include <stdio.h>
int main()
{
    int num, decimal = 0, i = 1, rem;
    printf("Enter a octal number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * i;
        num = num / 10;
        i = i * 8;
    }
    printf("Decimal number: %d", decimal);
    return 0;
}