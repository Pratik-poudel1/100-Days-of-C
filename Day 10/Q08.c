// Write a program in C to check whether a given number is a triangular number or not.

#include <stdio.h>
int main()
{
    int num, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (sum < num)
    {
        sum = sum + i;
        i++;
    }
    if (sum == num)
        printf("The number is a triangular number.");
    else
        printf("The number is not a triangular number.");

    return 0;
}