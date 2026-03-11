// Write a program in C to check whether a given number is prime or not.

# include  <stdio.h>
int main()
{
    int num,isprime=1,i=2;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
        i++;
    }
    if(isprime==1)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    return 0;
}