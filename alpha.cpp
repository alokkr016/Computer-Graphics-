#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
int main(){

    int gd=DETECT,gm;
    int i,xmid,ymid,x1,y1,x2,y2,x3,y3,x,y,dy,dx,p,gap=50,temp,option;
    int x1dash,x2dash,x3dash,y1dash,y2dash,y3dash;

    double theta;
	float m;
    char str[5];

    initgraph(&gd,&gm,NULL);
  
    xmid= getmaxx()/2;
    ymid= getmaxy()/2;

    line(5,ymid,getmaxx()-5,ymid);
    line(xmid+3,5,xmid+3,getmaxy()-5);
    for( i= xmid+gap;i<getmaxx()-5;i=i+gap)
    {
        outtextxy(i,ymid-3,"|");
        itoa(i-xmid,str,10);
        outtextxy(i,ymid+3,str);
    }
    for( i= ymid-gap;i>5;i=i-gap)
    {
        outtextxy(xmid,i,"-");
        itoa(ymid-i,str,10);
        outtextxy(xmid+5,i,str);
    }
    for( i= xmid-gap;i>5;i=i-gap)
    {
        outtextxy(i,ymid-3,"|");
        itoa(-(xmid-i),str,10);
        outtextxy(i-6,ymid+3,str);
    }
    for( i= ymid+gap;i<getmaxy()-5;i=i+gap)
    {
        outtextxy(xmid,i,"-");
        itoa(-(i-ymid),str,10);
        outtextxy(xmid+8,i,str);
    }

    line(100,400,500,27);
    circle(400,70,2);
    circle(440,133,2);

getch();
closegraph();
return 0;
}
