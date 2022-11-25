#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main(){
  int gh = DETECT, gm;
  int x,y;
  initgraph(&gh, &gm, "C:\\TurboC3\\BGI");
  randomize();
  setfillstyle(1,4);
  setcolor(4);
  while(!kbhit()){
    x = random(600);
    y = random(380);
    delay(500);
    clrscr();
    circle(x,y,20);
    floodfill(x,y,4);
  }
 getch();
}
