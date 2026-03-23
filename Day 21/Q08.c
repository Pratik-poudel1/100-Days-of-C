// Write a program in C to find the union of two arrays (all unique elements from both).

# include <stdio.h>
int main()
{
    int n1, n2, arr1[100], arr2[100], i, j, k = 0;
    printf("Enter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("Enter the elements of array 1: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n2);
    printf("Enter the elements of array 2: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                k++;
            }
        }
    }
    if (k == 0)
    {
        printf("No common elements found.");
    }
    return 0;
}