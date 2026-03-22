// Write a program in C to find the frequency of each distinct element in an array.

#include <stdio.h>
int main()
{
    int n, arr[100], i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        count = 1;
        // check if already counted
        for(j = 0; j < i; j++) 
        {
            if(arr[i] == arr[j])
            {
                break;
            }
        }
        if(j == i) 
        { // new element
            for(j = i + 1; j < n; j++) 
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}