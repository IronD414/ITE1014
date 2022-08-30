#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff)
{
    *pSum = a+b;
    *pDiff = a-b;
    return;
}

int main(void)
{
    int num1, num2, pSum, pDiff;
    scanf("%d %d",&num1,&num2);
    getSumDiff(num1,num2,&pSum,&pDiff);
    printf("sum: %d\ndiff: %d",pSum,pDiff);
}
