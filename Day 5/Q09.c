// Write a program in C to print the day name based on a day number (1–7) using switch statement.

# include <stdio.h>
int main() 
{
    int day;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    switch (day) 
    {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid day number");
    }
    return 0;
}