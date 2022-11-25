#include<graphics.h>
#include<conio.h>

void main(){
  int gd = DETECT, gm;
  int c,x,y;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  printf("Enter the Coordinates : \nX : ");
  scanf("%d",&x);
  printf("Y : ");
  scanf("%d",&y);
  cleardevice();
  putpixel(x,y,CYAN);
  printf("+++++Menu+++++\n\t\tReflection about\n1. X-axis");
  printf("\n2. Y-axis\n3. Origin\nEnter your Choice : ");
  scanf("%d",&c);
  switch(c){
    case 1:
      printf("Reflection of the coordinates \n\t(%d , %d) is (%d , %d)",x,y,x,-1*y);
      putpixel(x,-y,YELLOW);
      break;
    case 2:
      printf("Reflection of the coordinates \n\t(%d , %d) is (%d , %d)",x,y,-1*x,y);
      putpixel(-x,y,YELLOW);
      break;
    case 3:
      printf("Reflection of the coordinates \n\t(%d , %d) is (%d , %d)",x,y,-1*x,-1*y);
      putpixel(-x, -y, YELLOW);
      break;
    default:
      printf("Wrong Input.!!");
  }

  getch();
}