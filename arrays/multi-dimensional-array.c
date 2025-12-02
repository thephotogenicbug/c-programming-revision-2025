#include <stdio.h>

int main()
{

    /*
        syntax
        int arr[2][3];

    */

    int arr[2][3] = {{1, 3, 5}, {2, 4, 6}};

    printf("%d\n", arr[0][0]); // access index elements
    printf("%d\n", arr[1][2]);

    return 0;
}