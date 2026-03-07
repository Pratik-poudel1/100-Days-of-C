// Write a program in C to convert a lowercase letter to uppercase without using library functions.

# include <stdio.h>
int main()
{
    char a;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &a);
    if (a >= 'a' && a <= 'z')
    {
        a = a - 32;
    }
    printf("The uppercase letter is: %c", a);
    return 0;
}