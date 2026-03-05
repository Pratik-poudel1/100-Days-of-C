// Write a program in C to read a number and print its square and cube.

# include <stdio.h>
# include <math.h>
int main()
{
    int num,square,cube;
    printf("Enter a number: ");
    scanf("%d",&num);
    square = pow(num,2);
    cube = pow(num,3);
    printf("Square of %d is %d\n",num,square);
    printf("Cube of %d is %d\n",num,cube);
    return 0;
}