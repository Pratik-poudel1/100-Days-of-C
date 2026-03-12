// Write a program in C to read a number and display each digit of that number in words in reverse order.

# include <stdio.h>
int main()
{
    int num, temp, rem;
    char *digit[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        printf("%s ", digit[rem]);
        temp = temp / 10;
    }
    return 0;
}