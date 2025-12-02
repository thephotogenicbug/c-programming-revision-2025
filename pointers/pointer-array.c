#include <stdio.h>

int main()
{

    int numbers[5] = {1, 3, 4, 5, 6};

    for (int i = 0; i < 5; i++)
    {

        printf("%d = %p\n", numbers[i], &numbers[i]);
    }

    printf("Array address of 1: %p\n", numbers);
    printf("Array address of 3: %p\n", numbers + 1);
    printf("Array address of 4: %p\n", numbers + 2);

    return 0;
}