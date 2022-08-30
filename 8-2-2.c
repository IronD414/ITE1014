#include <stdio.h>

int pibo(x)
{
    if (x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    return pibo(x-2)+pibo(x-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",pibo(n));
}
