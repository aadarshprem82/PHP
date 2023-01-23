#include <conio.h>
#include <graphics.h>

void main(void) {
  int gdriver = DETECT, gmode;

  initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

  circle(320, 240, 100);
  rectangle(220, 140, 420, 340);

  floodfill(0, 0, WHITE);

  floodfill(320, 240, BLACK);

  setcolor(WHITE);
  settextstyle(1, 0, 3);
  outtextxy(270, 230, "Aadarsh");

  getch();
  closegraph();
}