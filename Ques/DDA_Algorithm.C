#include<graphics.h>
#include<conio.h>
void main(){
  int gh = DETECT, gm;
  int x1,y1,x2,y2,dx,dy,constr,p;
  initgraph(&gh, &gm, "C:\\TurboC3\\BGI");
  printf("Enter the value of X1 : ");
  scanf("%d",&x1);
  printf("Enter the value of Y1 : ");
  scanf("%d",&y1);
  printf("Enter the value of X2 : ");
  scanf("%d",&x2);
  printf("Enter the value of Y2 : ");
  scanf("%d",&y2);
  dx = x2-x1;
  dy = y2-y1;
  constr = dx;
  p = 2*dy - dx;
  while(constr>0){
    putpixel(x1,y1,2);
    if(p<0){
      x1 += 1;
      p = p + 2*dy;
    }
    else{
      x1 += 1;
      y1 += 1;
      p = p + 2*(dy-dx);
    }
    constr--;
  }
  getch();
}