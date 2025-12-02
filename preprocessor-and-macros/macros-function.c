#include <stdio.h>

#define PI 3.1415 // macros

#define circleArea(r) (PI * r * r) // macros function
int main()
{
    double radius = 12.4;

    double area = circleArea(radius);

    printf("%.2lf", area);

    return 0;
}