// Write a program in C to check whether a given year is a leap year using the conditional operator.

# include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("%d is a leap year.", year) : printf("%d is not a leap year.", year);
    return 0;
}