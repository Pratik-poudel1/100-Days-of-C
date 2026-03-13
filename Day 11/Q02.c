// Write a program in C to find the LCM of two given numbers.

#include <stdio.h>
int main()
{
    int a, b, temp,hcf,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    lcm = (a * b) / hcf;
    printf("LCM = %d", lcm);
    return 0;
}