// Write a program in C to read the principal, rate, and time and calculate simple interest and compound interest.

# include <stdio.h>
# include <math.h>
int main()
{
    float p,r,t,simple_interest,compound_interest;
    printf("Enter Principal:");
    scanf("%f",&p);
    printf("Enter Rate:");
    scanf("%f",&r);
    printf("Enter Time:");
    scanf("%f",&t);
    simple_interest = p*r*t/100;
    compound_interest = p*pow(1+r/100,t);
    printf("Simple Interest is %.2f\n",simple_interest);
    printf("Compound Interest is %.2f\n",compound_interest);
    return 0;
}
