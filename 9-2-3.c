#include <stdio.h>
int main(void)
{
    double a[5];
    scanf("%lf %lf %lf %lf %lf",a,a+1,a+2,a+3,a+4);
    double* parr = &a[0];
    for (int i=0; i<5; i++)
    {
        (*(parr+i))*=2;
    }
    double sum;
    for (int j=0; j<5; j++)
    {
        printf("%f\n",(*(parr+j)));
        sum += (*(parr+j));
    }
    printf("sum: %f",sum);
}
