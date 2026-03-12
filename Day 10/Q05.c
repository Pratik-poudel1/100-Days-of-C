// Write a program in C to find the sum of first and last digit of a given number.

# include <stdio.h>
int main()
{
    int num,temp, last_digit,first_digit,sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    temp=num;
    while (temp >= 10)
    {
        temp = temp / 10;
    }
    first_digit = temp;
    sum = last_digit + first_digit;
    printf("Sum of first and last digit of %d is %d", num, sum);
    return 0;
}