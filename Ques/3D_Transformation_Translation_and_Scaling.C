#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>

int x1, x2, y1, y2, mx, my, depth;

void draw();
void trans();
void scale();

void main() {
   int gd = DETECT, gm, c;
   initgraph(&gd, &gm, "C:\\turboc3\\bgi");
   printf("\nEnter top value(x1,y1):");
   scanf("%d%d", &x1, &y1);
   printf("Enter bottom value(x2,y2):");
   scanf("%d%d", &x2, &y2);
   depth = (x2 - x1) / 4;
   mx = (x1 + x2) / 2;
   my = (y1 + y2) / 2;
   draw();
   getch();
   cleardevice();
   trans();
   getch();
   cleardevice();
   scale();
   getch();
}
void draw() {
   bar3d(x1, y1, x2, y2, depth);
}
void trans() {
   int a1, a2, b1, b2, dep, x, y;
   printf("\n Enter the Ttransition Co ordinates:");
   scanf("%d%d", &x, &y);
   a1 = x1 + x;
   a2 = x2 + x;
   b1 = y1 + y;
   b2 = y2 + y;
   dep = (a2 - a1) / 4;
   draw();
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL, YELLOW);
   bar3d(a1, b1, a2, b2, dep, 1);
}
void scale() {
   int x, y, a1, a2, b1, b2, dep;
   printf("\n\n Enter scalling co-ordinates:");
   scanf("%d%d", &x, &y);
   a1 = mx + (x1 - mx) * x;
   a2 = mx + (x2 - mx) * x;
   b1 = my + (y1 - my) * y;
   b2 = my + (y2 - my) * y;
   dep = (a2 - a1) / 4;
   bar3d(a1, b1, a2, b2, dep, 1);
   setcolor(5);
   draw();
}