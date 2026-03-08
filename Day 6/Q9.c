// Write a program in C to check whether a given number is between 10 and 100 (inclusive) using logical operators.

# include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 100) 
    {
        printf("%d is between 10 and 100 (inclusive).\n", num);
    } 
    else 
    {
        printf("%d is not between 10 and 100 (inclusive).\n", num);
    }
    return 0;
}