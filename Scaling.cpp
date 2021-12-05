#include <stdio.h>  
#include <conio.h>  
#include <graphics.h>  
#include <dos.h> 
int main()
{

int gd=DETECT,gm; initgraph(&gd,&gm,NULL);
int x1=100,y1=100,x2=80,y2=150,x3=120,y3=150,sx,sy;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
printf("Enter scaling value among x- axis :");
scanf("%d",&sx);
printf("Enter scaling value among y- axis :");
scanf("%d",&sy); 
x1*=sx;x2*=sx;x3*=sx; 
y1*=sy;y2*=sy;y3*=sy; 
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1); 
getch();
 closegraph();
 return 0;
}

