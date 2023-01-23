#include<graphics.h>
#include<conio.h>
#include<math.h>

void scale(int x1, int y1, int x2,int y2){
  float x,y;
  rectangle(x1,y1,x2,y2);
  printf("Scaling in x : ");
  scanf("%f",&x);
  printf("Scaling in y : ");
  scanf("%f",&y);
  rectangle(x1,y1,x2*x,y2*y);
}

void rotate(int x1, int y1, int x2, int y2, int x3, int y3, double theta){
    double c,s;
    int a1,b1,a2,b2,a3,b3;
    int p = x2;
    int q = y2;
    line(x1,y1,x2, y2);
    line(x2,y2,x3,y3);
    line(x3, y3, x1,y1);
    c = cos(theta*3.14/180);
    s = sin(theta*3.14/180);
    a1=p+(x1-p)*c-(y1-q)*s;
    b1=q+(x1-p)*s+(y1-q)*c;
    a2=p+(x2-p)*c-(y2-q)*s;
    b2=q+(x2-p)*s+(y2-q)*c;
    a3=p+(x3-p)*c-(y3-q)*s;
    b3=q+(x3-p)*s+(y3-q)*c;
//    printf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
//    delay(200);
//    cleardevice();
    setcolor(CYAN);
    delay(100);
    line(a1,b1+100,a2,b2+100);
    delay(100);
    line(a2,b2+100,a3,b3+100);
    delay(100);
    line(a3,b3+100,a1,b1+100);
}

void translate(int arr[3][2], int t[]){
//  cleardevice();
  line(arr[0][0],arr[0][1], arr[1][0], arr[1][1]);
  line(arr[1][0],arr[1][1], arr[2][0], arr[2][1]);
  line(arr[2][0],arr[2][1], arr[0][0], arr[0][1]);
  arr[0][0] = arr[0][0] + t[0];
  arr[0][1] += t[1];
  arr[1][0] += t[0];
  arr[1][1] += t[1];
  arr[2][0] += t[0];
  arr[2][1] += t[1];
  setcolor(CYAN);
  line(arr[0][0],arr[0][1], arr[1][0], arr[1][1]);
  line(arr[1][0],arr[1][1], arr[2][0], arr[2][1]);
  line(arr[2][0],arr[2][1], arr[0][0], arr[0][1]);
}
void main(){
  int gd = DETECT, gm;
  int arr[3][2] = {{200,300},{200,200},{100,300}};
  int c;
  double ang;
  int t[2];
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  printf("+++++++Menu++++++++\n");
  printf("\t1. Translation\n");
  printf("\t2. Rotation\n");
  printf("\t3. Scaling\n");
  printf("Enter your choice : ");
  scanf("%d", &c);
  switch(c){
    case 1:
	printf("Enter the X's translation factor : ");
	scanf("%d",&t[0]);
	printf("Enter the Y's translation factor : ");
	scanf("%d",&t[1]);
	translate(arr,t);
	break;
    case 2:
	printf("Enter the angle of Rotation : ");
	scanf("%lf", &ang);
	rotate(arr[0][0],arr[0][1],arr[1][0],arr[1][1],arr[2][0],arr[2][1],ang);
	break;
    case 3:
	scale(arr[0][0]-100,arr[1][1],arr[0][0]+50,arr[0][0]+50);//{{200,200},{200,100},{100,200}};
	break;
    default:
	printf("Wrong Input!!");
  }
  getch();
}