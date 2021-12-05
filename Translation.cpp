#include <stdio.h>  
#include <conio.h>  
#include <graphics.h>  
#include <dos.h> 
int main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,NULL);

int x1=100,y1=100,x2=80,y2=150,x3=120,y3=150,tx,ty;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

printf("Enter translation value among x- axis :");
scanf("%d",&tx);
printf("Enter translation value among y- axis :");
scanf("%d",&ty);
x1+=tx;x2+=tx;x3+=tx;
y1+=ty;y2+=ty;y3+=ty;
line(x1,y1,x2,y2);

line(x2,y2,x3,y3);
 line(x3,y3,x1,y1); 
 getch();
 closegraph();
 return 0;
}

