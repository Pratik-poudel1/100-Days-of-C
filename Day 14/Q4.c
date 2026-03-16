// Write a program in C to generate a number pattern: 1 / 010 / 10101 / 0101010 (alternating 0 and 1).

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
            if((i+j)%2==0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}