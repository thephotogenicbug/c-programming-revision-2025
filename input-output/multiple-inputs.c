#include <stdio.h>

int main()
{
    double number;
    char alpha;

    printf("Enter input values: ");
    scanf("%lf %c", &number, &alpha);

    printf("Number: %lf", number);
    printf("\nCharacter: %c", alpha);

    return 0;
}