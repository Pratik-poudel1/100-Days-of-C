// Write a program in C to find the average of N numbers using a user-defined function.

# include <stdio.h>
float average(int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        float num;
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num);
        sum += num;
    }
    return sum / n;
}
int main()
{
    int n;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    float avg = average(n);
    printf("The average of %d numbers is: %.2f", n, avg);
    return 0;
}