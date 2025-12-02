#include <stdio.h>
#include <math.h>

int main()
{
    int number = 25;
    int cube = 27;
    int a = 5;
    int b = 2;
    
    printf("Square root of 25 is %lf\n", sqrt(number));
    printf("Cube root of 27 is %lf\n", cbrt(cube));
    printf("Power of 5 and 2 is %lf\n", pow(a, b));
    return 0;
}