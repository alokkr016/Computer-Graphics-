#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;

int main(){
	int gd=0,gm = DETECT;
	initgraph(&gd, &gm, NULL);
	initwindow(501,501);
	int x = getmaxx();
	int y = getmaxy();
	
	line(0,y/2,x,y/2);
	
	int x1,x2,x3,y1,y2,y3;
	x1 = 150,x2= 200,x3 = 175,y1 = 150,y2= 150,y3 = 125;
	int a[] = {x1,y1,x2,y2,x3,y3,x1,y1};s
	
	drawpoly(4,a);
	x1 = 300,x2= 350,x3 = 325,y1 = 150,y2= 150,y3 = 125;
	int b[] = {x1,y1,x2,y2,x3,y3,x1,y1};
	drawpoly(4,b);
	
	
	getch();  
    closegraph();  
    return 0;  
}
