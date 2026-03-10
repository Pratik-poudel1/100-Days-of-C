// Write a program in C to count the number of digits in a given integer.

# include <stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a Number: ")
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count++;
    }
    printf("Number of digits in %d is %d",num,count);
    return 0;
}