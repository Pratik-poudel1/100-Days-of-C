// Write a program in C to read three numbers and print them in ascending order.

# include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c && b < c) 
    {
        printf("%d, %d, %d in ascending order.", a, b, c);
    }
    else if (b < a && b < c && a < c) 
    {
        printf("%d, %d, %d in ascending order.", b, a, c);
    }
    else if (c < a && c < b && a < b) 
    {
        printf("%d, %d, %d in ascending order.", c, a, b);
    }
    else if (a < b && a < c && c < b) 
    {
        printf("%d, %d, %d in ascending order.", a, c, b);
    }
    else if (b < a && b < c && c < a) 
    {
        printf("%d, %d, %d in ascending order.", b, c, a);
    }
    else if (c < a && c < b && b < a) 
    {
        printf("%d, %d, %d in ascending order.", c, b, a);
    }
    return 0;
}