// Write a program in C to read two integers and print the result of bitwise AND, OR, XOR, and NOT operations.

# include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number: ")
    scanf("%d",&num1);
    printf("Enter second number: ")
    scanf("%d",&num2);
    printf("Bitwise AND: %d\n",num1&num2);
    printf("Bitwise OR: %d\n",num1|num2);
    printf("Bitwise XOR: %d\n",num1^num2);
    printf("Bitwise NOT: %d\n",~num1);
    return 0;
}