#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
 
int main(){ 
    int gd=0,gm = DETECT,x1,y1,x2,y2,x3,y3;  
    x1 = 200, y1 = 200, x2 = 100, y2 = 200, x3 = 200, y3 = 100;
 
    double s,c, angle;  
    initgraph(&gd, &gm, ""); 
    
    line(x1,y1,x2,y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
 
    printf("Enter rotation angle: ");  
    scanf("%lf", &angle);  
 
    cout << " Enter Pivot ";
    int xpiv, ypiv;
    cin >> xpiv >> ypiv;
 
    x1 -= xpiv;
    x2 -= xpiv;
    x3 -= xpiv;
 
    y1 -= ypiv;
    y2 -= ypiv;
    y3 -= ypiv;
 
 
    c = cos(angle * M_PI/180);  
    s = sin(angle * M_PI/180);  
    x1 =  xpiv + floor(x1 * c + y1 * s);  
    y1 = ypiv + floor(-x1 * s + y1 * c);  
    x2 =  xpiv + floor(x2 * c + y2 * s);  
    y2 = ypiv + floor(-x2 * s + y2 * c);  
    x3 = xpiv +  floor(x3 * c + y3 * s);  
    y3 = ypiv + floor(-x3 * s + y3 * c);  
    cleardevice();  
    line(x1, y1 ,x2, y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
    getch();  
    closegraph();  
    return 0;  
}
