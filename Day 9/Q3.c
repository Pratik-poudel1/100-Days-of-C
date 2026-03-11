// Write a program in C to generate the first 50 prime numbers.

# include <stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=50;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i/2+1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}