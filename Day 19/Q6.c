// Write a program in C to find the smallest element in an array of N numbers.

# include <stdio.h>
int main()
{
    int arr[100],n,min=0,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The smallest element is %d",min);
    return 0;
}