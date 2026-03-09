// Write a program in C to print all odd numbers between 1 and 50 using a while loop.

# include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 50)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
