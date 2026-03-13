// Write a program in C to generate an ASCII table showing all printable characters and their ASCII values.

# include <stdio.h>
int main()
{
    int i;
    for (i = 32; i <= 126; i++)
    {
        printf("%c: %d\n", i, i);
    }
    return 0;
}