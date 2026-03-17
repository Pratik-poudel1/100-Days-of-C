// Write a program in C to generate the reverse NEPAL pattern: NEPAL / NEPA / NEP / NE / N.

# include <stdio.h>
int main()
{
    char str[6] = "NEPAL";
    for (int i = 5; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}