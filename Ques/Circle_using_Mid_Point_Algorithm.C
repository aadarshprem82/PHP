#include <conio.h>
#include <graphics.h>
void main(void) {
  int gdriver = DETECT, gmode;
  int x, y, midx, midy, p, radius;
  initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
  floodfill(0, 0, WHITE);
  midx = 320; midy = 240; radius = 100;
  x = 0; y = radius; p = 1 - radius;
  do {
    putpixel(midx + x, midy + y, BLACK);
    putpixel(midx + y, midy + x, BLACK);
    putpixel(midx - x, midy + y, BLACK);
    putpixel(midx - y, midy + x, BLACK);
    putpixel(midx - x, midy - y, BLACK);
    putpixel(midx - y, midy - x, BLACK);
    putpixel(midx + x, midy - y, BLACK);
    putpixel(midx + y, midy - x, BLACK);
    if(p < 0) {
      p = p + (2 * x) + 1;
    } else {
      y--;
      p = p + (2 * x) - (2 * y) + 1;
    }
    x++;
  } while(x < y);
  getch();
  closegraph();
}