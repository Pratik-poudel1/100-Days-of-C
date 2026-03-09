// Write a program in C to print all even numbers between 1 and 50 using a for loop.

# include <stdio.h>
int main()
{
    int i;
    for (i=2; i <= 50; i=i+2)
    {
        printf("%d ", i);
    }
    return 0;
}