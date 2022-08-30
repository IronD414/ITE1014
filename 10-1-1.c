#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[10];
    char b[10];
    char c[10];
    scanf("%s %s",a,b);
    strcpy(c,a);
    printf("str1: %s\nstr2: %s\n",a,b);
    printf("length of str1: %ld\n",strlen(a));
    printf("length of str2: %ld\n",strlen(b));
    strcat(a,b);
    printf("str1+str2: %s\n",a);
    strcpy(a,c);
    if (strcmp(a,b)==0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}
