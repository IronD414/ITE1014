#include <stdio.h>

int combination(x,y)
{
    if (x==y)
    {
        return 1;
    }
    if (y==0)
    {
        return 1;
    }
    return combination(x-1,y-1)+combination(x-1,y);
}

int main(void)
{
    int n,r;
    scanf("%d%d",&n,&r);
    printf("%d",combination(n,r));
}
