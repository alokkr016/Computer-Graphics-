#include<iostream> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 
int main() 
{ 
 int gd=DETECT,gm; 
 initgraph(&gd,&gm,"c:\\tc\\bgi"); 
 setbkcolor(9); 
 line(100,100,260,100); 
 line(120,100,120,170); 
 arc(143,100,0,180,23); 
 line(165,100,165,155); 
 arc(150,155,100,0,15); 
 line(180,100,180,170); 
 circle(210,140,10); 
 line(210,130,250,130); 
 line(250,100,250,170); 
 getch(); 
return 0;
} 