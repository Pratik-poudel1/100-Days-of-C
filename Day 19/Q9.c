// Write a program in C to count how many elements in an array are greater than the average.

# include <stdio.h>
int main()
{
    int arr[100],n,sum=0,i,avg=0,counter=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
            counter++;
        }
    }
    printf("The number of elements greater than the average are %d",counter);
    return 0;
}