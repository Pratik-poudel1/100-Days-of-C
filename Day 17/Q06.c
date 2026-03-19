// Write a program in C to find the sum of digits of a number using a user-defined function.

# include <stdio.h>
int sum(int num) 
{
    int sum = 0;
    while (num > 0) 
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = sum(num);
    printf("The sum of digits of %d is %d", num, result);
    return 0;
}