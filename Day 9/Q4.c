// Write a program in C to count the number of prime numbers in a given range [min, max].

# include <stdio.h>
int main()
{
    int min,max,i,j,isprime=0,count=0;
    printf("Enter the minimum and maximum range: ");
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
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
            count++;
    }
    printf("Number of prime numbers in the range: %d",count);
    return 0;
}