#include<graphics.h>
#include<conio.h>
void main(){
  int gh = DETECT, gm;
  int i,j;
  initgraph(&gh, &gm, "C:\\TurboC3\\BGI");
//  setfillstyle(1,WHITE);
  setcolor(YELLOW);
  line(155,150,155,270);
  line(245,150,245,270);
  for(i=155;i<246;i++){
    line(i,150,i,270);
  }
  setcolor(6);
  line(200,100,150,150);
  line(200,100,250,150);
  line(150,150,250,150);
//  floodfill(250,150,WHITE);
  j = 150;
  for(i=200;i>149;i--){
//    delay(50);
    line(200,100,i,j);
//    j+=2;
  }
  for(i=200;i<251;i++){
//    delay(50);
    line(200,100,i,j);
  }

  line(200,100,350,95);
  line(350,95,400,145);

  line(250,150,400,145);

  j = 100;
  setcolor(8);
  for(i=200;i<251;i++){
//    delay(50);
    line(i,j,i+150,j-5);
    j+=1;
  }

  line(155,268,245,270);

  line(390,145,390,265);
  line(245,270,390,265);
  getch();
}