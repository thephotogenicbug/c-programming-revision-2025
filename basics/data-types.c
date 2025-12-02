#include <stdio.h>

int main()
{
    /*
      int               4-bytes | %d for printing
      double            8-bytes | %lf for printing
      float             4-bytes | %f for printing
      char              1-bytes | %c for printing
    */

    int age = 10;
    printf("Age: %d", age);

    double number = 12.45;
    printf("\nDouble Number: %.2lf", number);

    float number1 = 13.45f;
    printf("\nFloat Number: %.2f", number1);

    char character = 'N';
    printf("\n Character: %c", character);

    char character1 = 'A';
    printf("\nInteger value of A: %d", character1);

    int age2;
    double number2;

    printf("\nInteger Size: %zu", sizeof(age2));
    printf("\nDouble Size: %zu", sizeof(number2));

    return 0;
}