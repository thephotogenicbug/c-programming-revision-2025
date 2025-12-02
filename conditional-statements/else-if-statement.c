#include <stdio.h>

int main()
{

    /*

     syntax

    if(test_condition1){
         statement 1

    }else if(test_condition2){
         statement 2
    }else{
         statement 3
    } */

    int age = 18;

    if (age > 120)
    {
        printf("Invalid age!");
    }
    else if (age < 0)
    {

        printf("Invalid age!");
    }
    else if (age >= 18)
    {
        printf("You are eligible to vote!");
    }
    else
    {

        printf("Sorry you are not eligible to vote!");
    }

    return 0;
}