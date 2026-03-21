// Write a program in C to find both largest and smallest in a single pass through the array.

# include <stdio.h>
int main()
{
    int arr[100],n,i,max=0,min=0;
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
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The largest element is %d\n",max);
    printf("The smallest element is %d",min);
    return 0;
}