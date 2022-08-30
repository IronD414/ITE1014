#include <stdio.h>

void square(double* x)
{
    *x = (*x)*(*x);
    return;
}

int main(void)
{
    double dvar;
    scanf("%lf",&dvar);
    square(&dvar);
    printf("%f",dvar);
}
