#include <conio.h>
#include <graphics.h>

void main(void) {
  int gdriver = DETECT, gmode;

  initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

  settextstyle(5, 0, 5);
  outtextxy(300, 240, "Cursive Style");

  getch();
  closegraph();
}