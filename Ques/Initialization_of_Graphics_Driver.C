#include<graphics.h>
#include<conio.h>

void main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    line(100,300,200,200);
    getch();
}
