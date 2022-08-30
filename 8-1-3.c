#include <stdio.h>

int loop(int x)
{
    if(x==0)
        return 0;
    return x+loop(x-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",loop(n));
}
