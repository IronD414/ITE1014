#include <stdio.h>

int gMul = 1;

int addTotal(x)
{
    int sum;
    for (int i=1; i<=x; i++)
    {
        sum += i;
    }
    return sum;
}

void mulTotal(x)
{
    for (int i=1; i<=x; i++)
    {
        gMul = gMul*i;
    }
    return;
}

int main(void)
{
    int a;
    scanf("%d",&a);
    mulTotal(a);
    printf("addTotal(): %d\n",addTotal(a));
    printf("gMul: %d",gMul);
}
