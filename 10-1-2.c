#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[10];
    scanf("%s",a);
    for (int i=0; i<strlen(a); i++)
    {
        if (a[i]<=90)
        {
            a[i]+=32;
        }
        else
        {
            a[i]-=32;
        }
    }
    printf("%s",a);
}
