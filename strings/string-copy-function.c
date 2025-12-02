#include <stdio.h>
#include <string.h>

int main()
{
    char food[] = "Pizza";

    char bestFood[sizeof(food)];

    strcpy(bestFood, food);

    printf("%s", bestFood);

    return 0;
}
