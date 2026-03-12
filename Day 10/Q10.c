// Write a program in C to find the largest digit in a given integer.

# include <stdio.h>
int main()
{
    int num, rem, max = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        if (rem > max)
            max = rem;
        num = num / 10;
    }
    printf("Largest digit: %d", max);
    return 0;
}