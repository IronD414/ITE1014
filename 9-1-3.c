#include <stdio.h>

int main(void)
{
    char a[50];
    scanf("%s",a);
    int i=0;
    while (a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
}
