#include <stdio.h>

#define PI 3.141592

int main(void)
{
    double r;
    scanf("%lf",&r);
    printf("Perimeter: %f\n",2*PI*r);
    printf("Area: %f",PI*r*r);
}
