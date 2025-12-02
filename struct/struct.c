#include <stdio.h>

struct Person
{
    double salary;
    int age;
};

int main()
{
    struct Person person1;
    struct Person person2;

    person1.age = 25;
    person1.salary = 4321.78;

    person2.age = 28;
    person2.salary = 53452.78;

    printf("Age of person 1: %d\n", person1.age);
    printf("Salary of person 1: %.2f\n\n", person1.salary);

    printf("Age of person 2: %d\n", person2.age);
    printf("Salary of person 2: %.2f\n", person2.salary);

    return 0;
}