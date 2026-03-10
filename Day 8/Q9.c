// Write a program in C to print all factors of a given positive integer.

# include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}