// Write a program in C to print the Flag of Nepal shape using * (two right triangles joined).

# include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        printf("* ");
        printf("\n");
    }
    return 0;
}