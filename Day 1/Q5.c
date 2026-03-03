// Write a program in C to print the ASCII value of a hardcoded character using %d format specifier.

# include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("The ASCII value of %c is %d", c, c);
    return 0;
}