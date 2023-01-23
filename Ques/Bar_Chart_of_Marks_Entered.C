#include<conio.h>
#include<graphics.h>
void main(){
  int gd = DETECT, gm;
  float math, phy, chem;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  printf("Enter your Marks in\nMath : ");
  scanf("%f", &math);
  printf("Physics : ");
  scanf("%f", &phy);
  printf("Chemistry : ");
  scanf("%f", &chem);
  line(100,150,100,260);
  line(100,260,200,260);
  setfillstyle(SOLID_FILL, YELLOW);
  bar(120, 260 - math, 130, 260);
  bar(140, 260 - phy, 150, 260);
  bar(160, 260 - chem, 170, 260);
  getch();
}