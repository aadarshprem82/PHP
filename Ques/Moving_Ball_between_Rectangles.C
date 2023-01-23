#include<graphics.h>
#include<conio.h>
void main(){
     int gd=DETECT,gm,i;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     for(i=0;i<200;i++){
          cleardevice();
           setcolor(WHITE);
          rectangle(20,150,200,300);
          rectangle(400,150,580,300);
           setcolor(RED);
           setfillstyle(SOLID_FILL,RED);
          circle(110+(i*2),220, 50);
          floodfill(110+(i*2),220,RED);
	  delay(8);
     }
     getch();
}
