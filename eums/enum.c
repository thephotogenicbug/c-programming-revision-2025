#include <stdio.h>

// fixed integral values
enum Size
{
    Small,     // 0
    Medium,    // 1
    Large,     // 2
    ExtraLarge // 3
};

int main()
{

    enum Size shoeSize;

    shoeSize = ExtraLarge;

    printf("%d", shoeSize);

    return 0;
}