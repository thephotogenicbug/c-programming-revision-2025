#include <stdio.h>

int *findSquareNumber(int *number)
{
    int square = *number * *number;
    *number = square;

    return number;
}

int main()
{

    int number = 25;

    int *result = findSquareNumber(&number);

    printf("Result is: %d", *result);

    return 0;
}