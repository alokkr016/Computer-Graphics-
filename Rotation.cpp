#include <stdio.h>  
#include <conio.h>  
#include <graphics.h>  
#include <dos.h> 
#include<math.h> 
int main()
{
//clrscr();
int gd=DETECT,gm; 
initgraph(&gd,&gm,NULL); 
int x1,y1,x2,y2,x3,y3;
printf("Enter (x1,y1),(x2,y2),(x3,y3) for triangle : ");
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
int a[]={x1,y1,x2,y2,x3,y3,x1,y1}; 
drawpoly(4,a);
int xf=(x1+x2+x3)/ 3;
int yf=(y1+y2+y3)/ 3;
float ang;
printf(" Enter	the	rotation angle :");
scanf("%d",&ang);
float rad=ang*3.1428/180;
int X1=(x1-xf)*cos(rad)-(y1-yf)*sin(rad)+xf; 
int	Y1=(x1-xf)*sin(rad)+(y1-yf)*cos(rad) +yf;
int X2=(x2-xf)*cos(rad)-(y2-yf)*sin(rad) +xf;
int Y2=(x2-xf)*sin(rad)+(y2-yf)*cos(rad)+yf;
int X3=(x3-xf)*cos(rad)-(y3-yf)*sin(rad)+xf;
int Y3=(x3-xf)*sin(rad)+(y3-yf)*cos(rad)+yf;
int b[]={X1,Y1,X2,Y2,X3,Y3,X1,Y1};
drawpoly(4,b);

int X0=(x1-xf)*cos(rad)+(y1-yf)*sin(rad)+xf;

int Y0=-(x1-xf)*sin(rad)+(y1-yf)*cos(rad)+yf;

int X8=(x2-xf)*cos(rad)+(y2-yf)*sin(rad)+xf; 
int Y8=-(x2-xf)*sin(rad)+(y2- yf)*cos(rad)+yf;
int X9=(x3-xf)*cos(rad)+(y3- yf)*sin(rad)+xf; 
int Y9=-(x3-xf)*sin(rad)+(y3- yf)*cos(rad)+yf;
int b1[]={X0,Y0,X8,Y8,X9,Y9,X0,Y0};
drawpoly(4,b1); 
getch();
 closegraph();
 return 0;
}


