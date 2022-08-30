#include <stdio.h>
int main(void)
{
    int a[5];
    scanf("%d %d %d %d %d",a,a+1,a+2,a+3,a+4);
    int min=a[0];
    int max=a[0];
    int x=1;
    while (x<5)
    {
        if (a[x]>max)
        {
            max = a[x];
        }
        if (a[x]<min)
        {
            min = a[x];
        }
        x++;
    }
    printf("min: %d\n",min);
    printf("max: %d\n",max);
    printf("sum: %d",a[0]+a[1]+a[2]+a[3]+a[4]);
}
