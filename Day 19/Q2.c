// Write a program in C to read an array of N elements and find the sum and average.

# include <stdio.h>
int main()
{
    int arr[100],n,sum=0;
    float avg=0.0f;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("The sum is %d and average is %f",sum,avg);
    return 0;
}