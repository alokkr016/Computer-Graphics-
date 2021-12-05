/*
To display 4-bit region code for end points of a line and check whether 
the line is completely on the screen or off the screen.
*/
#include<graphics.h> 
#include<stdlib.h> 
#include<iostream>


#define	xmin	150
#define	xmax	500
#define	ymin	100
#define	ymax    370

using namespace std;

//case 1 (inside): 200 150 450 350
//case 2(outside): 550 100 600 400
//case 3 (intersecting): 50 100 300 400 

unsigned int code(int x, int y)
	{
	unsigned int c=0x0;

	enum{ABOVE=0x0, BELOW=0x4, RIGHT=0x2, LEFT=0x1};

	if(x<xmin)
	c=c|LEFT; 
	if(x>xmax)
	c=c|RIGHT; 
	if(y<ymin)
	c=c|BELOW; 
	if(y>ymax)
	c=c|ABOVE;

	return(c);
}

void check(unsigned c1, unsigned c2)
	{
	if(!(c1|c2)){
	cout<<"Line is completely inside";
	}
	else if(c1&c2){
	cout<<"Line is completely outside";
	}
	else{
	cout<<"Line requires clipping";
	}	
}

	void bin(unsigned int c)
	{
	for(int i=8; i>0; i--)
	{
	(c&i)?cout<<"1":cout<<"0"; cout<<endl;
	}
	} 
	
	
	int main()
	{
		int gd = DETECT,gm; system("cls");
		initgraph(&gd, &gm, NULL); 
		int x1, x2, y1, y2; 
		unsigned int code1, code2;
	
		cout<<"Enter coordinates x1, y1: "; cin>>x1>>y1;
		cout<<"Enter coordinates x2, y2: "; cin>>x2>>y2;

		//Plotting the viewport 
		line(xmin, 0, xmin, getmaxy()); 
		line(xmax, 0, xmax, getmaxy()); 
		line(0, ymin, getmaxx(), ymin);
		line(0, ymax, getmaxx(), ymax);

		// Obtain the region codes for 2 endpoints of the line 
		code1 = code(x1,y1);
		code2 = code(x2,y2); 
		line(x1,y1,x2,y2);

		cout<<"Region code of point 1: "; 
		bin(code1);
		cout<<"Region code of point 2: "; 
		bin(code2);

		check(code1, code2); 
		getch(); 
		closegraph();
		return 0;
} 

