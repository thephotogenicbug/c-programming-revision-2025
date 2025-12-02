#include <stdio.h>

int main()
{

    /*
        datatype arrayName[arraySize];
    */

    int age[5] = {28, 30, 19, 20, 25};

    age[2] = 26;

    // access array element using index
    printf("%d ", age[0]);
    printf("%d ", age[1]);
    printf("%d ", age[2]);
    printf("%d ", age[3]);
    printf("%d ", age[4]);

    return 0;
}