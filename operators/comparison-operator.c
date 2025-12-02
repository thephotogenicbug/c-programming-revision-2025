#include <stdio.h>
#include <stdbool.h>
int main()
{

    /*
       > Greater than
       < Less than
       == Equal to
       >= Greater than or equal to
       <= Less than or equal to
       != Not equal to

    */

    bool value = 12 > 9;
    bool value1 = 5 < 9;
    bool value2 = 9 == 9;
    bool value3 = 9 != 6;
    bool value4 = 9 >= 6;
    bool value5 = 9 <= 6;

    printf("%d", value);
    printf("\n%d", value1);
    printf("\n%d", value2);
    printf("\n%d", value3);
    printf("\n%d", value4);
    printf("\n%d", value5);

    return 0;
}