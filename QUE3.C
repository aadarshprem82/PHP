#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main(){
  int gd = DETECT, gm;
  char buff[] = "Yellow";
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  //Line
  setcolor(YELLOW);
  line(200,98,240,98);
  outtextxy(40,90,"Line");
  //Circle
  setcolor(WHITE);
  circle(170,100,10);
  outtextxy(40,100,"Circle");
  //Rectangle
  setcolor(CYAN);
  rectangle(200,88,240,108);
  outtextxy(40,110,"Rectangle");
  //Arc
  setcolor(MAGENTA);
  arc(196,140,200,340,30);
  outtextxy(40,120,"Arc");
  //Ellipse
  setcolor(LIGHTBLUE);
  ellipse(196,114,0,360,60,70);
  outtextxy(40,130,"Ellipse");
  //Triangle
  setcolor(RED);
  line(195,120,215,130);
  line(195,120,175,130);
  line(175,130,215,130);
  outtextxy(40,140,"Triangle");
  getch();
}