#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main(){
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  while(!kbhit()){
    randomize();
    setbkcolor(random(15));
  }
  getch();
}