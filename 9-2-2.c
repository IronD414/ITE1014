#include <stdio.h>

int main(void)
{
    int arr[5];
    scanf("%d %d %d %d %d",arr,arr+1,arr+2,arr+3,arr+4);
    int x = (*arr);
    (*arr) = (*(arr+4));
    (*(arr+4)) = x;
    x = (*(arr+1));
    (*(arr+1)) = (*(arr+3));
    (*(arr+3)) = x;
    for (int i=0; i<5; i++)
    {
        printf("%d ",(*(arr+i)));
    }
}
