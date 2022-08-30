#include <stdio.h>

void swap(char** pstr1, char** pstr2)
{
    char* temp = *pstr1;
    *pstr1 = *pstr2;
    *pstr2 = temp;
    return;
}

void printArray(char** arr, int len)
{
    printf("Array [0]:%s, [1]:%s,\n",*arr,*(arr+1));
    return;
}

int main(void)
{
    char* a[2] = {
        "aaa",
        "bbb"
    };
    printArray(&a[0],2);
    swap(&a[0],&a[1]);
    printArray(&a[0],2);
}
