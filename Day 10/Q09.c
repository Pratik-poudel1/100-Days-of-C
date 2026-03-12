// Write a program in C to check whether a given number is a Harshad (Niven) number or not.

# include <stdio.h>
int main()
{
    int num, rem, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    if (temp % sum == 0)
        printf("%d is a Harshad number.", temp);
    else
        printf("%d is not a Harshad number.", temp);
    return 0;
}