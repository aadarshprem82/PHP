#include <conio.h>
#include <graphics.h>
void main(void) {
  int gdriver = DETECT, gmode;
  int x1, y1, x2, y2, dx, dy, p;

  initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
  x1 = 100; y1 = 200; x2 = 250; y2 = 350;
  line(x1, y1, x2, y2);

  dx = x2 - x1;
  dy = y2 - y1;
  p = (2 * dy) - dx;

  while(x1 <= x2) {
    putpixel(x1, y1, WHITE);
    x1++;
    if(p < 0) {
      p = p + (2 * dy);
    } else {
      p = p + (2 * dy) - (2 * dx);
      y1++;
    }
  }

  getch();
  closegraph();
}