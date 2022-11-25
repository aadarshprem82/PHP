#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
    int gd=DETECT,gm,x1,y1,x2,y2,x3,y3;
    double si,co, degree;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    printf("Enter coordinates of triangle: ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    printf("Enter degree of rotation ");
    scanf("%lf", &degree);
    co = cos(degree*3.14/360);
    si = sin(degree*3.14/360);
    x1 = floor(x1 * co + y1 * si);
    y1 = floor(-x1 * si + y1 * co);
    x2 = floor(x2 * co + y2 * si);
    y2 = floor(-x2 * si + y2 * co);
    x3 = floor(x3 * co + y3 * si);
    y3 = floor(-x3 * si + y3 * co);
    printf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    line(x1, y1 ,x2, y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    getch();
}