#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

using namespace std;

void rectangele(){
  	float wxmin=10,wxmax=150,wymin=10,wymax=250;
      float vxmin=200,vxmax=600,vymin=10,vymax=250;
      int wx1=30,wy1=50,wx2=100,wy2=180;

      rectangle(wxmin,wymin,wxmax,wymax);
      rectangle(vxmin,vymin,vxmax,vymax);
      //
      float sx=(vxmax-vxmin)/(wxmax-wxmin);
      float sy=(vymax-vymin)/(wymax-wymin);

      rectangle(wx1,wy1,wx2,wy2);

      float vx1=sx*(wx1-wxmin)+vxmin;
      float vy1=sy*(wy1-wymin)+vymin;
      float vx2=sx*(wx2-wxmin)+vxmin;
      float vy2=sy*(wy2-wymin)+vymin;

      rectangle(vx1,vy1,vx2,vy2);

      outtextxy(60,260,"Window");
      outtextxy(360,260,"Viewport");
  }
  
  void traingle(){
  	int x = 200 , x1 = 100, x2 = 180, y = 100, y1 = 80, y2 = 200;
    int wxmax = 600;
    int wymax = 400;
    int wxmin = 20;
    int wymin = 20;
    rectangle (wxmin, wymin, wxmax, wymax);
    outtextxy (wxmin, wymin - 10, "Window");  
    //drawing a triangle 
    line (x, y, x1, y1);
    line (x1, y1, x2, y2);
    line (x2, y2, x, y);  
    // viewport 
    int vxmin = 300;
    int vymin = 30;
    int vxmax = 550;
    int vymax = 350;
    rectangle (vxmin, vymin, vxmax, vymax);
    outtextxy (vxmin, vymin - 10, "Viewport");  
    // calculatng Sx and Sy 
    float sx = (float) (vxmax - vxmin) / (wxmax - wxmin);
    float sy = (float) (vymax - vymin) / (wymax - wymin);
    x = vxmin + (float) ((x - wxmin) * sx);
    x1 = vxmin + (float) ((x1 - wxmin) * sx);
    x2 = vxmin + (float) ((x2 - wxmin) * sx);
    y = vymin + (float) ((y - wymin) * sy);
    y1 = vymin + (float) ((y1 - wymin) * sy);
    y2 = vymin + (float) ((y2 - wymin) * sy);
    // drawing triangle 
    line (x, y, x1, y1);
    line (x1, y1, x2, y2);
    line (x2, y2, x, y);
  }
int main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  int input;
  while(1){
    cout<<"Press 1 for Rectangle\nPress 2 for Traingle";
    cin>>input;
    switch(input){
    	case 1:
        rectangele();
        break;
	    case 2:
       	cleardevice();  
      	traingle();
      	break;
      default:
    	cout<<"Invalid Input";
    }
}
  getch();
  return 0;
}
