// Write a program in C to read N numbers and print only those that are greater than the average.

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
    for(i=1;i<=n;i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d",&i);
        if(i>avg)
        {
            printf("%d ",i);
        }
    }
    return 0;
}