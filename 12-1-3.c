#include <stdio.h>

void printString(const char* str)
{
    printf("%s\n%s\n%s",str,str+6,str+12);
}

int main(void)
{
    char a[3][6] = {"One","Two","Three"};
    void (*fptr)(const char*) = printString;
    fptr(&a);
}
