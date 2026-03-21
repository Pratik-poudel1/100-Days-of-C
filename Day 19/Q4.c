// Write a program in C to find the sum of all odd elements and sum of all even elements separately.

# include <stdio.h>
int main()
{
    int arr[100],n,sum1=0,sum2=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sum1+=arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
    }
    printf("The sum of all even elements are %d\n",sum1);
    printf("The sum of all odd elements are %d",sum2);
    return 0;