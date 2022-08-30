#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* x)
{
    Point p2;
    p2.xpos = x->xpos*2;
    p2.ypos = x->ypos*2;
    return (p2);
}

int main(void)
{
    Point p1;
    scanf("%d %d",&p1.xpos,&p1.ypos);
    Point p2 = getScale2xPoint(&p1);
    printf("%d %d",p2.xpos,p2.ypos);
}
