// Write a program in C to find the largest and smallest element in an m×n matrix.

# include <stdio.h>
int main()
{
    int m[10][10],m,n,i,j,max,min;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]>max)
                max=m[i][j];
            if(m[i][j]<min)
                min=m[i][j];
        }
    }
    printf("The largest element in the matrix is: %d\n",max);
    printf("The smallest element in the matrix is: %d\n",min);
    return 0;
}