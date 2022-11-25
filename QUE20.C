#include<graphics.h>
#include<conio.h>
#include<math.h>
void main(){
  int gd = DETECT, gm;
  int r[][2] = {{100,100},{200,100},{100,200},{200,200}};
  int n, shear;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  printf("\t++++Menu++++\n1. X-Shear \n2. Y-Shear\n Enter your choice : ");
  scanf("%d",&n);
    switch(n){
    case 1:
      printf("Enter the Shear Factor : ");
      scanf("%d",&shear);
      setcolor(CYAN);
      line(r[0][0],r[0][1],r[1][0],r[1][1]);
      line(r[0][0],r[0][1],r[2][0],r[2][1]);
      line(r[2][0],r[2][1],r[3][0],r[3][1]);
      line(r[1][0],r[1][1],r[3][0],r[3][1]);
      setcolor(YELLOW);
      line(r[0][0]+shear,r[0][1],r[1][0]+shear,r[1][1]);
      line(r[0][0]+shear,r[0][1],r[2][0],r[2][1]);
      line(r[2][0],r[2][1],r[3][0],r[3][1]);
      line(r[1][0]+shear,r[1][1],r[3][0],r[3][1]);
      break;
    case 2:
      printf("Enter the Y Shear Factor : ");
      scanf("%d",&shear);
      setcolor(CYAN);
      line(r[0][0],r[0][1],r[1][0],r[1][1]);
      line(r[0][0],r[0][1],r[2][0],r[2][1]);
      line(r[2][0],r[2][1],r[3][0],r[3][1]);
      line(r[1][0],r[1][1],r[3][0],r[3][1]);
      setcolor(YELLOW);
      line(r[0][0],r[0][1],r[1][0],r[1][1]-shear);
      line(r[0][0],r[0][1],r[2][0],r[2][1]);
      line(r[2][0],r[2][1],r[3][0],r[3][1]-shear);
      line(r[1][0],r[1][1]-shear,r[3][0],r[3][1]-shear);
      break;
    default:
      printf("Wrong Input.!!");
  }

  getch();
}