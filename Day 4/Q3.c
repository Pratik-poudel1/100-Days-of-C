// Write a program in C to find the largest of three numbers using nested if-else.

# include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) 
    {
        if (a > c) 
        {
            printf("%d is the largest number.", a);
        } 
        else 
        {
            printf("%d is the largest number.", c);
        }
    }
    elif (b > a)
    {
        if (b > c) 
        {
            printf("%d is the largest number.", b);
        } 
        else
        {
            printf("%d is the largest number.", c);
        }
    }
    return 0;
}