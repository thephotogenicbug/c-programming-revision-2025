#include <stdio.h>

int main()
{

    int age[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d input values: ", i);

        scanf("%d", &age[i]);
    }
    
    for (int i = 0; i < 6; i++) // out of bound error
    {

        printf("%d ", age[i]);
    }

    return 0;
}