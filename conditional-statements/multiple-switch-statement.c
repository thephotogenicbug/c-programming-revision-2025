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

    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Weekday");
        break;

    case 1:
    case 7:
        printf("Weekend");
        break;

    default:
        printf("Invalid value");
    }

    return 0;
}