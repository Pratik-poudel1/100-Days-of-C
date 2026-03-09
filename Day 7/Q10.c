// Write a program in C to find the sum of all digits of a given number using a while loop.

# include <stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    printf("Sum of digits of %d is %d",n,sum);
    return 0;
}