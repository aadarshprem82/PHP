#include<graphics.h>
#include<conio.h>

void main(){
  int gh = DETECT,gm;
  int x,y;
  initgraph(&gh,&gm,"C:\\TurboC3\\BGI");
  rectangle(100,100,250,200);
  printf("Scaling in x : ");
  scanf("%d",&x);
  printf("Scaling in y : ");
  scanf("%d",&y);

  rectangle(100-x,100-y,250+x,200+y);
  getch();
}