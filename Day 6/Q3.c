// Write a program in C to read percentage and display the grade:
//  Distinction (>=80),
//  First (>=60),
//  Second (>=45),
//  Pass (>=32),
//  Fail.

#include <stdio.h>
int main()
{
    int percentage;
    printf("Enter percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 80)
        printf("Distinction");
    else if (percentage >= 60)
        printf("First");
    else if (percentage >= 45)
        printf("Second");
    else if (percentage >= 32)
        printf("Pass");
    else
        printf("Fail");
    return 0;
}