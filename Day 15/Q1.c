// Write a program in C to generate the following NEPAL word pattern: N / NE / NEP / NEPA / NEPAL.

# include <stdio.h>
int main()
{
    char str[6] = "NEPAL";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}