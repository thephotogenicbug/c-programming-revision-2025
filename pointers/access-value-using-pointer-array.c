#include <stdio.h>

int main()
{

    int numbers[5] = {1, 3, 4, 5, 6};

    for (int i = 0; i < 5; i++)
    {

        printf("%d = %p\n", *(numbers + i), numbers + i);
    }

    return 0;
}