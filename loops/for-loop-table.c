#include <stdio.h>

int main()
{

    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    // int count = 1;

    for (int count = 0; count <= 10; count++)
    {
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product);
        count++;
    }
    return 0;
}