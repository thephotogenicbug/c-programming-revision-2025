#include <stdio.h>

int main()
{

    /*
       syntax

      while(condition){

         statement body
      }*/

    int count = 1;
    while (count < 5)
    {

        printf("\nWhile loop in c: ");
        printf("\nCount = %d", count);
        count = count + 1;
    }

    return 0;
}