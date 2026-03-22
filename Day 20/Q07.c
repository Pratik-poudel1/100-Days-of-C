// Write a program in C to insert a number at a given position in an array.

# include <stdio.h>
int main()
{
    int n, arr[100], i, pos, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter number: ");
    scanf("%d", &num);
    for(i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    printf("New array is: ");
    for(i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}