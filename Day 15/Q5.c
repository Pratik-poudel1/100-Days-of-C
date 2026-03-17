// Write a program in C to print the Christmas Tree pattern using * with N levels (each level 2 stars wider).

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int width = 2 * (n + 1) - 1; 
    for (int i = 1; i <= n; i++)
    {
        int stars = 2 * i - 1;
        int spaces = (width - stars) / 2;

        for (int j = 1; j <= spaces; j++)
            printf(" ");

        for (int j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }
    for (int i = 1; i <= n + 1; i++)
    {
        int stars = 2 * i - 1;
        int spaces = (width - stars) / 2;

        for (int j = 1; j <= spaces; j++)
            printf(" ");

        for (int j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= (width - 1) / 2; j++)
            printf(" ");

        printf("*\n");
    }
    return 0;
}