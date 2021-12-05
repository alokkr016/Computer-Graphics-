#include<graphics.h>
#include<conio.h>
#include<stdio.h>
main()
{
   int gd = DETECT, gm;
   struct arccoordstype a;
   char arr[100];

   initgraph(&gd, &gm,"C:\\TC\\BGI");

   arc(250,200,0,90,100);
   getarccoords(&a);

   sprintf(arr,"(%d, %d)",a.xstart,a.ystart);
   outtextxy(360,195,arr);

   sprintf(arr,"(%d, %d)",a.xend,a.yend);
   outtextxy(245,85,arr);

   getch();
   closegraph();
   return 0;
}
