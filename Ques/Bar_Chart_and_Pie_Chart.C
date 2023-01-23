#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main(){
  int gd = DETECT, gm;
  int i,j;
  initgraph(&gd, &gm, "C:\\turboc3\\bgi");
  line(50,30,50,170);
  line(30,150,250,150);
  randomize();
  for(i=0,j=0;j<360;i++,j+=12){
    if(i<18){
      delay(200);
      setfillstyle(SOLID_FILL,(rand()%(15-1+1)+1));
      bar((50+i*10)+15,149,70+i*10,(rand()%(149 - 30 +1)+30));
      setfillstyle(SOLID_FILL, (rand()%(15-1+1)+1));
      pieslice(360,100,j+0.5,j+12,100);
    }
    else{
      setfillstyle(SOLID_FILL, (rand()%(15-1+1)+1));
      delay(100);
      pieslice(360,100,j+0.5,j+12,100);
    }
  }
/*  for(i=0; i<18; i++){
    delay(200);
    setfillstyle(SOLID_FILL,(rand()%(15-1+1)+1));
    bar((50+i*10)+15,149,70+i*10,(rand()%(149 - 30 +1)+30));
  }
  for(i=0;i<360;i+=12){
    setfillstyle(SOLID_FILL, (rand()%(15-1+1)+1));
    delay(100);
    pieslice(350,100,i,i+12,80);
  }*/
  getch();
}