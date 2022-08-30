#include <stdio.h>
int main(void)
{
    int a,b,c;
    int min, max;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        max = a;
        if(b>c)
        {
            min = c;
        }
        else
        {
            min = b;
        }
    }
    else if(b>a && b>c)
    {
        max = b;
        if(a>c)
        {
            min = c;
        }
        else
        {
            min = a;
        }
    }
    else
    {
        max = c;
        if(a>b)
        {
            min = b;
        }
        else
        {
            min = a;
        }
    }
    printf("min: %d\n",min);
    printf("max: %d",max);
}
