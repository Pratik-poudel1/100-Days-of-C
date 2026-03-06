// Write a program in C to check whether a given integer is a multiple of both 3 and 7.

# include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("%d is a multiple of both 3 and 7.", num);
    }
    else
    {
        printf("%d is not a multiple of both 3 and 7.", num);
    }
    return 0;
}