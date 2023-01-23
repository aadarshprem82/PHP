#include<graphics.h>
#include<conio.h>
void main(){
int gh = DETECT, gm;
int i,j,x,y;
initgraph(&gh, &gm, "C:\\TurboC3\\BGI");
/*setcolor(12);
setfillstyle(1,3);
line(100,100,300,100);
line(100,100,100,130);
line(100,130,300,130);
line(300,100,300,130);
floodfill(200,220,12);

setcolor(15);
line(100,131,300,131);
line(100,132,100,162);
line(100,162,300,162);
line(300,132,300,162);

setcolor(10);
line(100,163,300,163);
line(100,164,100,194);
line(100,194,300,194);
line(300,164,300,194);
*/
setcolor(12);
for(i=100;i<301;i++){
  delay(10);
  line(i,100,i,130);
}
setcolor(15);
for(i=100;i<301;i++){
  delay(10);
  line(i,131,i,161);
}
setcolor(10);
for(i=100;i<301;i++){
  delay(10);
  line(i,162,i,192);
}
setcolor(1);
for(j=15;j>0;j--){
  delay(40);
  circle(200,146,j);
}
getch();
}