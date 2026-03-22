// Write a program in C to find the second smallest element in an array without sorting.

# include <stdio.h>
int main()
{
    int n, arr[100], i, min1, min2, min3;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // assume first three elements
    min1 = arr[0];
    min2 = arr[1];
    min3 = arr[2];
    // arrange first three
    if(min1 > min2) 
    { 
        int t = min1; 
        min1 = min2; 
        min2 = t; 
    }
    if(min1 > min3) 
    {
        int t = min1; 
        min1 = min3; 
        min3 = t; 
    }
    if(min2 > min3) 
    {
        int t = min2; 
        min2 = min3; 
        min3 = t; 
    }
    printf("Second smallest element is: %d", min2);
    return 0;
}