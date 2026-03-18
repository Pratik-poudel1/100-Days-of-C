// Write a program in C to read N numbers and find the second largest number without sorting.

#include <stdio.h>
int main()
{
    int n, i, num;
    int largest, second_largest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Need at least 2 numbers.");
        return 0;
    }
    // First number
    printf("Enter element 1: ");
    scanf("%d", &largest);
    second_largest = -99999; // very small value
    for (i = 2; i <= n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        if (num > largest)
        {
            second_largest = largest;
            largest = num;
        }
        else if (num > second_largest && num != largest)
        {
            second_largest = num;
        }
    }
    if (second_largest == -99999)
        printf("No second largest number.");
    else
        printf("Second largest number is: %d", second_largest);

    return 0;
}