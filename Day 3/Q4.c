// Write a program in C to check and print the sizes of int, float, double, char, and long using sizeof().

# include <stdio.h>
int main()
{
    printf("Size of int: %d\n", sizeof(int));
    printf("Size of float: %d\n", sizeof(float));
    printf("Size of double: %d\n", sizeof(double));
    printf("Size of char: %d\n", sizeof(char));
    printf("Size of long: %d\n", sizeof(long));
    return 0;
}