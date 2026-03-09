// Write a program in C to print numbers from N down to 1 using a for loop (countdown).

# include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}