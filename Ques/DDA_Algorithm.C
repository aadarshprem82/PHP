#include<graphics.h>
#include<conio.h>
void main(){
  int gh = DETECT, gm;
  float x,y,dx,dy,s;
  int x1,y1,x2,y2,i;
  initgraph(&gh, &gm, "C:\\TurboC3\\BGI");
  printf("Enter the value of X1 : ");
  scanf("%d",&x1);
  printf("Enter the value of Y1 : ");
  scanf("%d",&y1);
  printf("Enter the value of X2 : ");
  scanf("%d",&x2);
  printf("Enter the value of Y2 : ");
  scanf("%d",&y2);
  dx = (float)(x2-x1);
  dy = (float)(y2-y1);
  if(dx>=dy){
  s = dx;
  }
  else{
  s = dy;
  }
  dx = dx/s;
  dy = dy/s;
  x = x1;
  y = y1;
  i = 1;
  while(i <= s){
    putpixel(x,y,WHITE);
    x += dx;
    y += dy;
    i = i+ 1;
  }
  getch();
}