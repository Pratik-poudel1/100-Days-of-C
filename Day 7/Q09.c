// Write a program in C to print all multiplication tables from 1 to 10 using nested loops.

# include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("Table of %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}