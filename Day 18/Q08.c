// Write a program in C to print digits of a number in reverse order using recursion.

# include <stdio.h>
void reverse(int n)
{
    if (n > 0)
    {
        reverse(n / 10);
        printf("Reversed Number: %d ", n % 10);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n);
    return 0;
}