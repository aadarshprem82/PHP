#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main(void) {
  int gdrive = DETECT, gmode, i;

  initgraph(&gdrive, &gmode, "C:\\Turboc3\\BGI");

  for(i = 100; i < 200; i++) {
    cleardevice();
    outtextxy(i, i, "TEXT");
    delay(20);
  }

  getch();
  closegraph();
}