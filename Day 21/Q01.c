// Write a program in C to find the standard deviation of N numbers in an array.

# include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    float sum = 0, mean, sd;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    mean = sum / n;
    for(int i = 0; i < n; i++)
    {
        sd += (arr[i] - mean) * (arr[i] - mean);
    }
    sd = sd / n;
    printf("Standard Deviation: %.2f", sd);
    return 0;
}