// Write a program in C to build a basic calculator using switch statement that supports +, -, *, and / operations.

# include <stdio.h>
int main()
{
    int num1, num2;
    char choice;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator: ");
    scanf(" %c", &choice);
    switch (choice)
    {
    case '+':
        printf("Sum: %d\n", num1 + num2);
        break;
    case '-':
        printf("Difference: %d\n", num1 - num2);
        break;
    case '*':
        printf("Product: %d\n", num1 * num2);
        break;
    case '/':
        printf("Quotient: %d\n", num1 / num2);
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}