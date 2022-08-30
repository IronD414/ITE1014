#include <stdio.h>

void printLine(n)
{
    for (int i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    return;
}

int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++)
    {
        printLine(i);
    }
    for (int j=a; j>=1; j--)
    {
        printLine(j);
    }
}
