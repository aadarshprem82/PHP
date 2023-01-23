#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main(){
    int gd = DETECT, gm;
    int i, rad;
    float midx, midy, x,y, x1, y1, theta;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    midx = 300;
    midy = 300;
    rad = 115;
    x = 415;
    y = 300;
    while(!kbhit()){
        delay(10);
        cleardevice();
        circle(midx, midy, rad-10);
        theta = 3.14/180;
        x1 = midx + (x-midx) * cos(theta) - (y - midy) * sin(theta);
        y1 = midy + (x-midx) * sin(theta) + (y - midy) * cos(theta);
        circle(x1, y1, 10);
        x = x1;
        y = y1;
    }
    getch();
    closegraph();
}
