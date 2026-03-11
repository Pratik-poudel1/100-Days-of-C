// Write a program in C to find the sum of all prime numbers between 1 and N.

# include <stdio.h>
int main()
{
    int n,i,sum=0,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
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
            sum=sum+i;
        }
    }
    printf("Sum of all prime numbers between 1 and %d: %d",n,sum);
    return 0;
}