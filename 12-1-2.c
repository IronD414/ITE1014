#include <stdio.h>

int main(void)
{
    int a[3][2];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int k=0; k<3; k++)
    {
        for (int l=0; l<2; l++)
        {
            printf("%d ",a[k][l]);
        }
        printf("\n");
    }
}
