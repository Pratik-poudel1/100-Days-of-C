// Write a program in C to check whether a number is a palindrome or not.

# include <stdio.h>
int main()
{
    int num, rem, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("%d is a palindrome", temp);
    }
    else
    {
        printf("%d is not a palindrome", temp);
    }
    return 0;
}