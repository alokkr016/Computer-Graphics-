#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
void clockwise(int x1,int x2,int x3,int y1,int y2,int y3){
	int xf=(x1+x2+x3)/3;
	int yf=(y1+y2+y3)/3;

	float ang;

	cout<<"Enter the rotation angle :";

	cin>>ang;

	float rad=ang*3.1428/180;

	int X1=(x1-xf)*cos(rad)-(y1-yf)*sin(rad)+xf;

	int Y1=(x1-xf)*sin(rad)+(y1-yf)*cos(rad)+yf;

	int X2=(x2-xf)*cos(rad)-(y2-yf)*sin(rad)+xf;

	int Y2=(x2-xf)*sin(rad)+(y2-yf)*cos(rad)+yf;

	int X3=(x3-xf)*cos(rad)-(y3-yf)*sin(rad)+xf;

	int Y3=(x3-xf)*sin(rad)+(y3-yf)*cos(rad)+yf;

	int b[]={X1,Y1,X2,Y2,X3,Y3,X1,Y1};

	drawpoly(4,b);
	
}

void anticlockwise(int x1,int x2,int x3,int y1,int y2,int y3){
	int xf=(x1+x2+x3)/3;

	int yf=(y1+y2+y3)/3;

	float ang;

	cout<<"Enter the rotation angle :";

	cin>>ang;

	float rad=ang*3.1428/180;

	int X1=(x1-xf)*cos(rad)+(y1-yf)*sin(rad)+xf;

	int Y1=-(x1-xf)*sin(rad)+(y1-yf)*cos(rad)+yf;

	int X2=(x2-xf)*cos(rad)+(y2-yf)*sin(rad)+xf;

	int Y2=-(x2-xf)*sin(rad)+(y2-yf)*cos(rad)+yf;

	int X3=(x3-xf)*cos(rad)+(y3-yf)*sin(rad)+xf;

	int Y3=-(x3-xf)*sin(rad)+(y3-yf)*cos(rad)+yf;

	int b[]={X1,Y1,X2,Y2,X3,Y3,X1,Y1};

	drawpoly(4,b);
}

int main(){
	int gd=0,gm = DETECT,x1,y1,x2,y2,x3,y3;  
    x1 = 200, y1 = 200, x2 = 100, y2 = 200, x3 = 200, y3 = 100;
    initgraph(&gd, &gm, NULL);
	int a[]={x1,y1,x2,y2,x3,y3,x1,y1};
	
	drawpoly(4,a);
	int val;
	while(val != -1){
	cout<<"Press 1 for clockwise\nPress 2 for anticlockwise"<<endl;
	cin>>val;
	switch (val){
		case 1:
			clockwise(x1,x2,x3,y1,y2,y3);
			break;
		
			
		case 2:
			
			anticlockwise(x1,x2,x3,y1,y2,y3);
			break;
		
				
		default:
			
			cout<<"Invalid Input"<<endl;
			break;
		
		
	}	
		
}
	getch();  
    closegraph();  
    return 0;  

}



