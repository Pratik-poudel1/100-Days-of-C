// Write a program in C to read N numbers and find the count of positive, negative, and zero values.

# include <stdio.h>
int main()
{
    int i, n, pos = 0, neg = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &i);
        if (i > 0)
            pos++;
        else if (i < 0)
            neg++;
        else
            zero++;
    }
    printf("\nCount of positive elements: %d", pos);
    printf("\nCount of negative elements: %d", neg);
    printf("\nCount of zero elements: %d", zero);
    return 0;
}