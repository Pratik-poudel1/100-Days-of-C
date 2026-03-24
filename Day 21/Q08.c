// Write a program in C to find the sum of principal diagonal elements of a square matrix.

# include <stdio.h>
int main()
{
    int m[10][10],sum=0,m,n,i,j;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
            if(i==j)
                sum+=m[i][j];
        }
    }
    printf("The sum of the principal diagonal elements of the matrix is: %d\n",sum);
    return 0;
}