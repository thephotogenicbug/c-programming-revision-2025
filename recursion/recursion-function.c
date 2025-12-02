#include <stdio.h>

void recurse()
{

    if (1 == 1)
    {
    }
    else
    {

        recurse();
    }
}

int main()
{
    recurse();
    return 0;
}