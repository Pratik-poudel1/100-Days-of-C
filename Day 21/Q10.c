// Write a program in C to check whether a square matrix is symmetric.

# include <stdio.h>
int main()
{
    int m[10][10],m,n,i,j;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]!=m[j][i])
            {
                printf("The matrix is not symmetric.\n");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric.\n");
    return 0;
}