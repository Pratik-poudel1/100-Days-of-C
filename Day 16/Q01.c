// Write a program in C to find the average of N numbers entered by the user using a loop.

# include <stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d",&i);
        sum=sum+i;
    }
    avg=(float)sum/n;
    printf("The average is: %f",avg);
    return 0;
}