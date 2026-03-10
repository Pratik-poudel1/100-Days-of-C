// Write a program in C to find the factorial of a given positive integer using a do-while loop.

# include <stdio.h>
int main()
{
    int num, fact = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num<0)
    {
        printf("Factorial of %d is not possible", num);
    }
    else
    {
        do
        {
            fact = fact * i;
            i++;
        } while (i <= num);
        printf("Factorial of %d is %d", num, fact);
    }
    return 0;
}