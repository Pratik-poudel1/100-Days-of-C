// Write a program in C to print a triangle where each row contains powers of 2: 1 / 2 4 / 8 16 32.

#include <stdio.h>
int main()
{
    int i, j, n;
    int p = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", p);
            p = p * 2;
        }
        printf("\n");
    }
    return 0;
}