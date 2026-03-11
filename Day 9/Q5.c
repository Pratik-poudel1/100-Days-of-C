// Write a program in C to print all prime numbers between 1 and 500.

# include <stdio.h>
int main()
{
    int i,j,isprime=1;
    for(i=1;i<=500;i++)
    {
        isprime=1;
        if(i<2)
            continue;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
            printf("%d ",i);
    }
    return 0;
}