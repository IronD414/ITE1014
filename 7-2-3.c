#include <stdio.h>
int main(void)
{
    char a;

    while(1)
    {
       
        scanf("%c",&a);
        if(a=='\n')
        {
            getchar();
            continue;
        }
        if(a>=65 && a<=90)
        {
            printf("-> %c\n",a+32);
            getchar();
            continue;
        }
        if(a>=97 && a<=122)
        {
            printf("-> %c\n",a-32);
            getchar();
            continue;
        }
        if(a>=48 && a<=57)
        {
            printf("-> %c\n",a);
            getchar();
            continue;
        }
        else
        {
            printf("exit");
            break;
        }
    }
}
