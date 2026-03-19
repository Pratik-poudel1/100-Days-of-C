// Write a program in C to find the maximum of three numbers using a user-defined function.

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a,b,c,maximum;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    maximum=max(a,b,c);
    printf("The maximum number is: %d",maximum);
    return 0;
}