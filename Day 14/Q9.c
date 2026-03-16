// Write a program in C to generate a pattern of consecutive numbers in right-angle triangle shape: 1 / 2 3 / 4 5 6.

# include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j+i-1);
        }
        printf("\n");
    }
    return 0;
}