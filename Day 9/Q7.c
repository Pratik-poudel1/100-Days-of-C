// Write a program in C to check whether a number is prime using a do-while loop.

# include <stdio.h>
int main()
{
    int num,i=2,isprime=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
        i=i+1;
    }while(i<=num/2);
    if(isprime==1)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    return 0;
}