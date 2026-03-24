// Write a program in C to read a 2×3 matrix and display its content in matrix form.

# include <stdio.h>
int main()
{
    int m[2][3];
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}