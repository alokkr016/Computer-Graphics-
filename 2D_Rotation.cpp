#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
//anti-clockwise rotation
using namespace std;

int main(){
    int gd=0,gm = DETECT;
    int x1, x2, y1, y2;
    double s,c, angle;
    initgraph(&gd, &gm, NULL);
    setcolor(WHITE);
    cout<<"Enter the coordinate of line: ";
    cin>>x1>>y1>>x2>>y2;
    setbkcolor(WHITE);
    line(x1,y1,x2,y2);
    setbkcolor(BLACK);
    cout<<"Enter angle of rotation: ";
    cin>>angle;
    setbkcolor(WHITE);

    //converting the angle to radian
    c = cos(angle*3.14/180); 
    s = sin(angle*3.14/180);

    x1 = float(x1*c - y1*s);
    y1 = float(y1*c + x1*s);
    x2 = float(x2*c - y2*s);
    y2 = float(y2*c + x2*s);

    line(x1,y1,x2,y2);

    getch();  
    closegraph();  
    return 0;  


}
