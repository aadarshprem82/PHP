#include<graphics.h>
#include<conio.h>

void main(){
  int gh = DETECT,gm;
  initgraph(&gh,&gm,"C:\\TurboC3\\BGI");
  ellipse(320,200,0,360,50,70);
  circle(300,175,5);
  circle(340,175,5);
  ellipse(350,210,120,200,50,10);
  arc(320,200,240,300,50);
  getch();
}