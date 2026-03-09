// Write a program in C to find the sum of first N natural numbers where N is given by the user.

# include <stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of first %d natural numbers is: %d",n,sum);
    return 0;
}