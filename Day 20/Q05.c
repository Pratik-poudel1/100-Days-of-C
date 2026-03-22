// Write a program in C to check whether an array is sorted in ascending order.

# include <stdio.h>
int main()
{
    int n, arr[100], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            printf("Array is not sorted in ascending order.");
            return 0;
        }
    }
    printf("Array is sorted in ascending order.");
    return 0;
}