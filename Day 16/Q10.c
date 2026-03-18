// Write a program in C to find all automorphic numbers between 1 and 1000 (e.g., 25² = 625, ends in 25).

#include <stdio.h>
int main()
{
    int i, temp, square, digits;
    for(i = 1; i <= 1000; i++)
    {
        square = i * i;
        temp = i;
        digits = 1;
        // count digits
        while(temp >= 10)
        {
            temp /= 10;
            digits *= 10;
        }
        // check automorphic
        if(square % (digits * 10) == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}