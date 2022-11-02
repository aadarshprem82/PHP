#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(){
  int bs[4] = {0,0,0,0}, be[4] = {0,0,0,0}, bc[4];
  int xmx, ymx, xmn, ymn, f= 0;
  float m;
  int xs, ys, xe, ye, i, xc,yc;
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  printf("Enter minimum and maximum coordinates : \n");
  scanf("%d %d %d %d",&xmn,&ymn,&xmx,&ymx);
  printf("Enter the starting and ending coordinates : \n");
  scanf("%d %d %d %d",&xs,&ys,&xe,&ye);
  cleardevice();
  rectangle(xmn,ymn,xmx,ymx);
  line(xs,ys,xe,ye);
  if(ys>ymx){
    bs[0]=1;
    f = 1;
  }
  if(ys<ymn){
    bs[1] = 1;
    f = 1;
  }
  if(xs>xmx){
    bs[2] = 1;
    f = 1;
  }
  if(xs<xmn){
    bs[3] = 1;
    f = 1;
  }

  if(ye>ymx){
    be[0] = 1;
    f = 1;
  }
  if(ye<ymn){
    be[1] = 1;
    f = 1;
  }
  if(xe>xmx){
    be[2] = 1;
    f = 1;
  }
  if(xe<xmn){
    be[3] = 1;
    f = 1;
  }
  if(f == 0){
    printf("Inside the window \n");

  }
  f =1;
  for(i=0;i<4;i++){
    bc[i] = bs[i] && be[i];
    if(bc[i] == 1){
      f = 0;
    }
  }
  if(f ==0){
     printf("Inside the window");
  }
  else{
    m = (float)(ye-ys)/(xe-xs);
    if(bs[2] == 0 && bs[3] == 1){
      ys = ys + (float)(xmn - xs)*m;
      xs = xmn;
    }
    if(bs[2] == 1 && bs[3] == 0){
      ys = ys + (float)(xmx - xs)*m;
      xs = xmx;
    }
    if(bs[0] == 1 && bs[1] == 0){
      xs = xs + (float)(ymx - ys)/m;
      ys = ymx;
    }
    if(bs[0] == 0 && bs[1] == 1){
      xs = xs+(float)(ymn - ys)/m;
      ys = ymn;
    }

    if(be[2] == 0 && be[3] == 1){
      ye = ye+(float)(xmn - xe)*m;
      xe = xmn;
    }
    if(be[2] == 1 && be[3] == 0){
      ye = ye + (float)(xmx - xe)*m;
      xe = xmx;
    }
    if(be[0] == 1 && be[1] == 0){
      xe = xe + (float)(ymx - ye)/m;
      ye = ymx;
    }
    if(be[0] == 0 && be[1] == 1){
      xe = xe+(float)(ymn-ye)/m;
      ye = ymn;
    }
  }
  delay(2000);
  clearviewport();
  rectangle(xmn,ymn,xmx,ymx);
  setcolor(YELLOW);
  line(xs,ys,xe,ye);
  getch();
  closegraph();

}