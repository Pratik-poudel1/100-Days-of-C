// Write a program in C to find the largest element in an array of N numbers.

# include <stdio.h>
int main()
{
    int arr[100],n,max=0,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The largest element is %d",max);
    return 0;
}