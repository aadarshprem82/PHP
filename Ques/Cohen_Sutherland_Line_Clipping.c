#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(){
    int bs[4]={0,0,0,0},be[4]={0,0,0,0},bc[4];
    int xmax,ymax,xmin,ymin,f=0;
    float m;
    int xs,ys,xe,ye,i, xc,yc;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("\n Enter minimum and maximum coordinate of Window rectangle form----:");
    scanf("%d %d %d %d",&xmin,&ymin,&xmax,&ymax);
    printf("\n Enter line starting and ending Coordinate for clipping :");
    scanf("%d %d %d %d",&xs,&ys,&xe,&ye);
    cleardevice();
    rectangle(xmin,ymin,xmax,ymax);
    line(xs,ys,xe,ye);
    if(ys>ymax) {
        bs[0]=1;     // Starting bit for upper
        f=1 ;
    }
    if(ys<ymin) {
        bs[1]=1;           // Starting bit for down
        f=1;
    }
    if(xs>xmax)  {
        bs[2]=1;           // Starting bit for right
        f=1;
    }
    if(xs<xmin)   {
        bs[3]=1;           // Starting bit for left
        f=1;
    }

    if(ye>ymax){
        be[0]=1;           // Ending bit for upper
        f=1;
    }
    if(ye<ymin) {
        be[1]=1;           // Ending bit for down
        f=1;
    }
    if(xe>xmax){
        be[2]=1;           // Ending bit for right
        f=1;
    }
    if(xe<xmin){
        be[3]=1;           // Ending bit for left
        f=1;
     }
    if(f==0){
        printf("When all bit are zero then no need of clipping it is already in window");
    }
    f=1;
    for(i=0;i<4;i++){
        bc[i]= bs[i] && be[i] ;
        if(bc[i]==1)
         f=0;
    }
    if(f==0){
        printf("\n line is completely outside the window");
    }
    else{
        m=(float)(ye-ys)/(xe-xs);
        if(bs[2]==0 && bs[3]==1){
            ys=ys+(float) (xmin-xs)*m ;
            xs=xmin;
        }
        if(bs[2]==1 && bs[3]==0){
            ys=ys+(float) (xmax-xs)*m ;
            xs=xmax;
        }
        if(bs[0]==1 && bs[1]==0){
            xs=xs+(float) (ymax-ys)/m ;
            ys=ymax;
        }
        if(bs[0]==0 && bs[1]==1){
            xs=xs+(float) (ymin-ys)/m ;
            ys=ymin;
        }
    // end points
        if(be[2]==0 && be[3]==1){
            ye=ye+(float) (xmin-xe)*m ;
            xe=xmin;
        }
        if(be[2]==1 && be[3]==0){
            ye=ye+(float) (xmax-xe)*m ;
            xe=xmax;
        }
        if(be[0]==1 && be[1]==0){
            xe=xe+(float) (ymax-ye)/m ;
            ye=ymax;
        }
        if(be[0]==0 && be[1]==1){
            xe=xe+(float) (ymin-ye)/m ;
            ye=ymin;
        }
    }
    delay(2000);
    clearviewport();
    rectangle(xmin,ymin,xmax,ymax);
    setcolor(YELLOW);
    line(xs,ys,xe,ye);
    getch();
    closegraph();
}
