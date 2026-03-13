// Write a program in C to convert a decimal number to hexadecimal.

# include <stdio.h>
int main()
{
    int num, hex[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        hex[i] = num % 16;
        num = num / 16;
        i++;
    }
    printf("Hexadecimal number: ");
    for(int j = i - 1; j >= 0; j--)
        printf("%x", hex[j]);
    return 0;
}