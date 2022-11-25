#include<graphics.h>
#include<conio.h>
#include<math.h>
#define sine(x) sin(x * (3.14)/180)
#define cosine(x) cos(x * (3.14)/180)

void scale(int x1, int y1, int x2,int y2){
  int x,y;
  rectangle(x1,y1,x2,y2);
  printf("Scaling in x : ");
  scanf("%d",&x);
  printf("Scaling in y : ");
  scanf("%d",&y);
  rectangle(x1-x,y1-y,x2+x,y2+y);
}

void rotate(int x1, int y1, int x2, int y2, int x3,int y3, double theta){
    double co,si;
    line(x1, y1 ,x2, y2);
    line(x2,y2,x3,y3);
    line(x3, y3, x1, y1);
    co = cosine(theta);
    si = sine(theta);
    x1 = floor(x1 * co + y1 * si);
    y1 = floor(-x1 * si + y1 * co);
    x2 = floor(x2 * co + y2 * si);
    y2 = floor(-x2 * si + y2 * co);
    x3 = floor(x3 * co + y3 * si);
    y3 = floor(-x3 * si + y3 * co);
    printf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    delay(200);
    cleardevice();
    setcolor(CYAN);
    line(x1, y1 ,x2, y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
}

void translate(int arr[3][2], int t[]){
  cleardevice();
  printf("%d",&arr[0][0]);
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
  int arr[3][2] = {{200,200},{200,100},{100,200}};
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
	printf("%d",arr[0][0]);
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