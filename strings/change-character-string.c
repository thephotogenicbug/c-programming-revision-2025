#include <stdio.h>

int main()
{
    char str[] = "Naveen";

    str[4] = 'E';
    str[5] = 'E';

    printf("%c\n", str[4]);
    printf("%c", str[5]);

    return 0;
}