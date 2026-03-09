// Write a program in C to find the sum of squares of first N natural numbers.

# include <stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += i*i;
    }
    printf("Sum of squares of first %d natural numbers is: %d",n,sum);
    return 0;
}