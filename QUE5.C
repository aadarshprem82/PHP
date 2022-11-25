#include <conio.h>
#include <graphics.h>

void main(void) {
  int gdriver = DETECT, gmode;
  int x0, y0, x1, y1, dx, dy, p;

  initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
  x0 = 100; y0 = 200; x1 = 250; y1 = 350;
  line(x0, y0, x1, y1);

  dx = x1 - x0;
  dy = y1 - y0;
  p = (2 * dy) - dx;

  while(x0 <= x1) {
    putpixel(x0, y0, WHITE);
    x0++;
    if(p < 0) {
      p = p + (2 * dy);
    } else {
      p = p + (2 * dy) - (2 * dx);
      y0++;
    }
  }

  getch();
  closegraph();
}