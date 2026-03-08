// Write a program in C to find the largest of four numbers using only conditional operators.

# include <stdio.h>
int main()
{
    int a,b,c,d;
    a>b?(a>c?(a>d?printf("a is largest"):printf("d is largest")):printf("c is largest")):printf("b is largest");
    return 0;
}