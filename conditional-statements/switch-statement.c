#include <stdio.h>

int main()
{

    /*

     syntax

    switch (variable / expression)
    {
    case value1:
         body of case 1
        break;
    case value2:
         body of case 2
        break;
    case value3:
         body of case 3
        break;

    default:
         body of default
    }*/

    int number;

    printf("Enter the number between 1 - 7: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invalid value");
    }

    return 0;
}