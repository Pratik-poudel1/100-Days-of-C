// Write a program in C to multiply two matrices of size p×q and q×r.

# include <stdio.h>
int main()
{
    int p,q,r,i,j,k,a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows and columns of the first matrix: \n");
    scanf("%d %d",&p,&q);
    printf("Enter the number of rows and columns of the second matrix: \n");
    scanf("%d %d",&q,&r);
    printf("Enter the elements of the first matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(i=0;i<q;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        {
            c[i][j]=0;
            for(k=0;k<q;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The product of the matrices is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}