#include <stdio.h>

int main()
{

    int age = 25;

    int *ptr = &age;

    printf("Pointer Address:%p", ptr);
    printf("\nPointer value: %d", *ptr);

    return 0;
}