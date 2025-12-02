#include <stdio.h>

int main()
{

    int age[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d input values: ", i);

        scanf("%d", &age[i]);
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%d\n ", age[i]);
    }

    return 0;
}