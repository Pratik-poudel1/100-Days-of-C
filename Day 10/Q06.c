// Write a program in C to find the sum of digits of a number until it reduces to a single digit.

# include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    while (sum >= 10)
    {
        temp = sum;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
    }
    printf("Sum of digits of %d until it reduces to a single digit is %d", num, sum);
    return 0;
}