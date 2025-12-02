#include <stdio.h>

int main()
{
    double number;
    char alphabet;

    printf("Enter double input: ");
    scanf("%lf", &number);

    printf("\nEnter character input: ");
    scanf("\n%c", &alphabet);

    printf("\nNumber: %lf", number);
    printf("\nCharacter: %c", alphabet);

    return 0;
}