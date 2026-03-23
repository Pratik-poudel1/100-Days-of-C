// Write a program in C to find the majority element in an array (appears more than N/2 times).

# include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 1;
    int majority = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == majority)
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            majority = arr[i];
            count = 1;
        }
    }
    printf("Majority element: %d", majority);
    return 0;
}