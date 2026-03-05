// Write a program in C to read a 3-digit integer and extract and print its hundreds, tens, and units digits.

# include <stdio.h>
int main()
{
    int num, units, tens, hundreds;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);
    units = num % 10;
    tens = (num / 10) % 10;
    hundreds = num / 100;
    printf("Units digit: %d\n", units);
    printf("Tens digit: %d\n", tens);
    printf("Hundreds digit: %d\n", hundreds);
    return 0;
}