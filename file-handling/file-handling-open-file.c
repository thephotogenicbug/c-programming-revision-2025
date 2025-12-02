#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("test.txt", "r");

    if (fptr != NULL)
    {

        printf("File open successful");
    }
    else
    {

        printf("File open failed");
    }

    return 0;
}