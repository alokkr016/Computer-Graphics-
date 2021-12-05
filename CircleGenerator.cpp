#include<bits/stdc++.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
#define round(a) ((int)(a+0.5))

int main()
{                           
//           clrscr();
           int gd=DETECT,gm;
           initgraph(&gd,&gm,"");

// METHOD1

           int xc=100,yc=150,r=50;
           float x=0,y=0;
           for(int i=0;i<=45;i++)
           {
           double ang=double(i)*(3.142/180);
           x = r*cos(ang);
           y = r*sin(ang);
           putpixel(xc+round(x),yc+round(y),15);
           putpixel(xc-round(x),yc+round(y),15);
           putpixel(xc+round(x),yc-round(y),15);
           putpixel(xc-round(x),yc-round(y),15);
           putpixel(xc+round(y),yc+round(x),15);
           putpixel(xc-round(y),yc+round(x),15);
           putpixel(xc+round(y),yc-round(x),15);
           putpixel(xc-round(y),yc-round(x),15);
           delay(100);

           }
           //METHOD2
           x=0;y=r;
           xc=300,yc=150;
           for(x=0;x<y;x++)
           {
           double temp=((r*r)-(x*x));
           y=sqrt(temp);
           putpixel(xc+round(x),yc+round(y),15);
           putpixel(xc-round(x),yc+round(y),15);
           putpixel(xc+round(x),yc-round(y),15);
           putpixel(xc-round(x),yc-round(y),15);
           putpixel(xc+round(y),yc+round(x),15);
           putpixel(xc-round(y),yc+round(x),15);
           putpixel(xc+round(y),yc-round(x),15);
           putpixel(xc-round(y),yc-round(x),15);
           delay(100);

           }
           getch();
		   closegraph();
		   return 0;

}
