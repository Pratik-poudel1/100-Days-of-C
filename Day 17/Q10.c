// Write a program in C to check whether a number is Armstrong using a user-defined function.

# include <stdio.h>
void is_armstrong(int num)
{
    int sum = 0, temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("%d is an Armstrong number", num);
    }
    else
    {
        printf("%d is not an Armstrong number", num);
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    is_armstrong(num);
    return 0;
}