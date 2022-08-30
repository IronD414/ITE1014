#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    if(a<-10)
    {
        printf("n<-10");
    }
    else if(-10<=a && a<0)
    {
        printf("-10<=n<0");
    }
    else if(0<=a && a<10)
    {
        printf("0<=n<10");
    }
    else
    {
        printf("n>=10");
    }
    printf("\n")
}
