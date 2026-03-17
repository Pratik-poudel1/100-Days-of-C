// Write a program in C to generate the expanding inverted NEPAL pyramid: N / EE / PPP / AAAA / LLLLl.

# include <stdio.h>
int main()
{
    char str[6] = "NEPAL";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}