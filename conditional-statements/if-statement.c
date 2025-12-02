#include <stdio.h>

int main()
{
    /*
     syntax

    if(test_condition){
       body of if statement
     } */

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote!");
    }

    if (age < 18)
    {
        printf("Sorry your are not eligible to vote!");
    }

    return 0;
}