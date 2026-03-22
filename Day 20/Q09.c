// Write a program in C to merge two arrays of M and N elements into a single sorted array.

# include <stdio.h>
int main()
{
    int m, n, arr1[100], arr2[100], arr3[100], i, j, k;
    printf("Enter number of elements in first array: ");
    scanf("%d", &m);
    printf("Enter number of elements in second array: ");
    scanf("%d", &n);
    for(i = 0; i < m; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for(j = 0; j < n; j++)
    {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &arr2[j]);
    }
    for(i = 0, j = 0, k = 0; i < m && j < n; k++)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i++];
        }
        else
        {
            arr3[k] = arr2[j++];
        }
    }
    while(i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while(j < n)
    {
        arr3[k++] = arr2[j++];
    }
    printf("Merged array is: ");
    for(i = 0; i < m + n; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}