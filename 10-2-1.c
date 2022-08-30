#include <stdio.h>
#include <string.h>

int palindrome(char* a, int size)
{ 
    int y[size];
    for (int i=0; i<size; i++)
    {
        if ((*(a+i))==(*(a+size-i-1)))
        {
            y[i]=1;
        }
        else
        {
            y[i]=0;
        }
    }
    int ysum=0;
    for (int j=0; j<size; j++)
    {
        ysum+=y[j];
    }
    if (ysum==size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    char x[10];
    scanf("%s",x);
    int z = palindrome(x,strlen(x));
    if (z==1)
    {
        printf("This is a palindrome");
    }
    if (z==0)
    {
        printf("This is not a palindrome");
    }
}
