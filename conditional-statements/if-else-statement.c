#include <stdio.h>

int main()
{
    /*
     syntax

    if(test_condition){
           statement 1
     }else{

        body of else statement
     }
     */

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote!");
    }
    else
    {

        printf("Sorry your are not eligible to vote!");
    }

    return 0;
}