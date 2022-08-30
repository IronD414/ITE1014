#include <stdio.h>

int add(x1,y1)
{
    return x1+y1;
}

int sub(x2,y2)
{
    return x2-y2;
}

int mul(x3,y3)
{
    return x3*y3;
}

double div(x4,y4)
{
    return x4/y4;
}

int mod(x5,y5)
{
    return x5%y5;
}

void printMsg()
{
    printf("completed");
    return;
}

int main(void)
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("sum: %d\n",add(a,b));
    printf("difference: %d\n",sub(a,b));
    printf("product: %d\n",mul(a,b));
    printf("division: %f\n",div((double)a,(double)b));
    printf("remainder: %d\n",mod(a,b));
    printMsg();
}
