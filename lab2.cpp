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
	
	cout<<x<<endl;
	cout<<y;
//	line(0,y/2,x,y/2);
//	line(x/2,0,x/2,y);
//	
//	line(0,0,300,230);
//	line(639,0,340,230);
	
	
	
	getch();  
    closegraph();  
    return 0;  
}
