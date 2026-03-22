// Write a program in C to delete an element at a given position from an array.

# include <stdio.h>
int main()
{
    int n, arr[100], i, pos, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("New array is: ");
    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}