#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;

int main(){
	
	int gd=0,gm = DETECT;
	initgraph(&gd, &gm, NULL);
	line(100,100,200,100);
	line(150,50,150,150);
	line(150,85,100,50);
	line(200,50,150,85);
	getch();  
    closegraph();  
    return 0;  
}
