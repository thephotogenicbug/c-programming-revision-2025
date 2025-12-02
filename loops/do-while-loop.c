#include <stdio.h>

int main()
{
    /*
       syntax

       do{
           statement body
       }while(condition)
    */
    int count = 1;

    do
    {
        printf("%d\n", count);
        count++;
    } while (count < 5);
    return 0;
}