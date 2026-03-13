// Write a program in C to find both HCF and LCM of two numbers in a single program.

#include <stdio.h>
int main()
{
    int num1,num2,temp,hcf,lcm;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    while (num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    hcf = num1;
    lcm = (num1 * num2) / hcf;
    printf("HCF = %d\nLCM = %d",hcf,lcm);
    return 0;
}