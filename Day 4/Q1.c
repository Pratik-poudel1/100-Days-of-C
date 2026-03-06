// Write a program in C to check whether a given integer is positive, negative, or zero using if-else.

# include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is positive\n", num);
    }
    else if (num < 0)
    {
        printf("%d is negative\n", num);
    }
    else
    {
        printf("%d is zero\n", num);
    }
    return 0;
}