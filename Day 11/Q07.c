// Write a program in C to convert a decimal number to octal.

#include <stdio.h>
int main()
{
    int num, octal[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }
    printf("Octal number: ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    return 0;
}