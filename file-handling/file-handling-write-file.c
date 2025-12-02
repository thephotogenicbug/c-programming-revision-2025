#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("newFile.txt", "w");

    fputs("I Love C Programming\n", fptr);
    fputs("C Programming series by Programiz", fptr);

    fclose(fptr);

    return 0;
}