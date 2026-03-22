// Write a program in C to find the second largest element in an array without sorting.

#include <stdio.h>

int main() {
    int n, arr[100], i,largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Assume first two elements
    if (arr[0] > arr[1]) 
    {
        largest = arr[0];
        second = arr[1];
    } 
    else 
    {
        largest = arr[1];
        second = arr[0];
    }
    // Check remaining elements
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    printf("Second largest element is: %d", second);
    return 0;
}