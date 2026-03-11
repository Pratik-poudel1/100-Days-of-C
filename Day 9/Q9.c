// Write a program in C to check whether a given number is a composite number or not.

# include <stdio.h>
int main()
{
    int n, i, isComposite = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 3)
    {
        printf("Not a composite number");
    }
    else
    {
        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                isComposite = 1;
                break;
            }
        }
        if(isComposite == 1)
            printf("Composite number");
        else
            printf("Not a composite number");
    }
    return 0;
}