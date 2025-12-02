#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*
      &&    Logical AND
      ||    Logical OR
      !     Logical Not

    */

    int age = 18;
    double height = 6.3;

    bool result = (age >= 18) && (height > 6);
    bool result1 = (age >= 18) || (height > 6);
    bool result2 = !(age >= 18);

    printf("%d", result);
    printf("\n%d", result1);
    printf("\n%d", result2);

    return 0;
}