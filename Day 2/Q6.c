// Write a program in C to read three integers and print their sum, average, product, smallest, and largest.

# include <stdio.h>
int main()
{
    int a,b,c,sum,avg,pro,min,max;
    printf("Enter First,Second,Third Number: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    pro=a*b*c;
    if (a<b && a<c)
    {
        min = a;
    }
    else if (b<a && b<c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    if (a>b && a>c)
    {
        max = a;
    }
    else if (b>a && b>c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("Sum: %d\n",sum);
    printf("Average: %d\n",avg);
    printf("Product: %d\n",pro);
    printf("Smallest: %d\n",min);
    printf("Largest: %d\n",max);
    return 0;
}