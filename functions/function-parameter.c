#include <stdio.h>

void calculateSquare(int number)
{
    int square = number * number;
    printf("Square of %d is %d\n", number, square);
}

void addNumbers(int number1, int number2)
{
    int sum = number1 + number2;
    printf("Sum of %d and %d is %d\n", number1, number2, sum);
}

int main()
{

    calculateSquare(5);
    addNumbers(45, 65);

    return 0;
}