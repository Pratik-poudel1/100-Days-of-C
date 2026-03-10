// Write a program in C to reverse a given integer number using a do-while loop.

# include <stdio.h>
int main() 
{
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    } while (num != 0);
    printf("Reverse of %d is %d", num, rev);
    return 0;
}