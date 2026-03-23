// Write a program in C to find all pairs in an array whose sum equals a given value K.

# include <stdio.h>
int main()
{
    int n, k, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of K: ");
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == k)
            {
                printf("Pair found: %d %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}