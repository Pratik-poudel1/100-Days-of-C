// Write a program in C to read an m×n matrix and find the sum and average of all elements.

# include <stdio.h>
int main()
{
    int m[10][10],sum=0,avg,m,n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
            sum+=m[i][j];
        }
    }
    avg=sum/(r*c);
    printf("The sum of the elements of the matrix is: %d\n",sum);
    printf("The average of the elements of the matrix is: %d\n",avg);
    return 0;
}