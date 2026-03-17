// Write a program in C to generate the spaced NEPAL pattern: N / N E / N E P / N E P A / N E P A L.

# include <stdio.h>
int main()
{
    char str[6] = "NEPAL";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    return 0;
}