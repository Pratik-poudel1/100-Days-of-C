// Write a program in C to read numbers until the user enters 0 and print their sum and count.

# include <stdio.h>
int main()
{
    int i,n,sum=0,c=0;
    printff("Calculate Sum and Count of Given Numbers until the user enters 0\n");
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("Enter a number : ",n);
        scanf("%d",&n);
        sum=sum+n;
        c=c+1;
    }
    printf("The sum is: %d",sum);
    printf("\nThe count is: %d",c);
    return 0;
}