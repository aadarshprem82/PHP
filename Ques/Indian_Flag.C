#include<graphics.h>
#include<conio.h>
void main(){
int gh = DETECT, gm;
int i,j,x,y;
initgraph(&gh, &gm, "C:\\TurboC3\\BGI");
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