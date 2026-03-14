// Write a program in C to find the sum of the series:
// S = 1 - 3*2/5 + 5*4/7 - 7*6/9 ... to N terms.

#include <stdio.h>
int main()
{
    int n,i;
    double sum = 0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        double term = (double)((2*i-1)*(2*i-2))/(2*i+1);

        if(i%2==0)
            sum = sum - term;
        else
            sum = sum + term;
    }
    printf("Sum of the series = %.2lf",sum);

    return 0;
}