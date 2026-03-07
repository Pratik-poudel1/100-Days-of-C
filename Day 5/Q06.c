// Write a program in C to convert an uppercase letter to lowercase without using library functions.

# include <stdio.h>

int main()
{
    char a;
    printf("Enter an uppercase letter: ");
    scanf(" %c", &a);
    if (a >= 'A' && a <= 'Z')
    {
        a = a + 32;
    }
    printf("The lowercase letter is: %c", a);
    return 0;
}