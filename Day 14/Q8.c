// Write a program in C to print the following pattern: 1 / 212 / 32123 / 4321234 / 543212345.

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for(j = 2; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}