// Write a program in C to find the largest prime number less than a given number N.

# include <stdio.h>
int main()
{
    int n,i,j,isprime=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n-1;i>=2;i--)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
            printf("Largest prime number less than %d: %d",n,i);
            break;
        }
    }
    return 0;
}