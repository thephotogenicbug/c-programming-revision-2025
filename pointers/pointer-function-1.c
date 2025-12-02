#include <stdio.h>

void findSquareNumber(int *number)
{
    int square = *number * *number;
    *number = square;
}

int main()
{

    int number = 25;

    findSquareNumber(&number);

    printf("Square is: %d", number);

    return 0;
}