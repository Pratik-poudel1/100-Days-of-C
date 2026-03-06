// Write a program in C to find the absolute value of a number without using the abs() library function.

# include <stdio.h>
# include <stdlib.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("Absolute value of %d is %d",num,abs(num));
    return 0;
}