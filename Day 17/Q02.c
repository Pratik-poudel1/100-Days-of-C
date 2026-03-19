// Write a program in C to check whether a number is even or odd using a user-defined function.

# include <stdio.h>
void odd_even(int num)
{
    if (num%2==0)
    {
        printf("%d is even number",num);
    }
    else
    {
        printf("%d is odd number",num);
 
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    odd_even(num);
    return 0;
}