#include <graphics.h>
#include <conio.h>
  
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    setbkcolor(9);
    
	arc(100, 100, 270, 90, 30); //First arc
    arc(100,160,270,90,30); //Second arc
    line(100,130,180,130); //Middle line
    line(180,70,180,190); //Virticle line
    line(210,70,210,190); //another Virticle line
    
	ellipse(270,190,60,180,35,60); // l first arc
    ellipse(300,190,0,120,35,60); // l second arc
    
    line(295,70,295,130); // l first line
    line(360,70,360,190); // l's verticle line
	
	line(180,70,500,70); // upper line
	
	line(285,30,360,70); // oo matra
	
	line(435,70,435,190); // | line in "k"
	ellipse(435,120,90,270,45,20); // left part
	ellipse(435,170,330,90,45,30); // right part
	
	/*=================PUNJABI=====================*/
	
	line(100,260,180,260); // upper line
	line(240,260,345,260);
//	line(100,260,100,380);
	
	arc(100, 290, 270, 90, 30); // r arc
	
	line(100,320,130,380); // r line
	
	line(120,385 ,135,385); // oo matra
	
	// M starts 
	line(180,260,180,330); // verticle small
	line(170,320,240,320); // horizontal
	
	line(170,320,180,330); // triangle
	
	line(240,260,240,380); // 1st verticle in m
	line(260,260,260,380); // 2nd verticle in m
	// M ends
	
	//R starts
	line(345,260,345,380);  // "r" verticle
	ellipse(345,350,90,270,40,30);
	//R ends
	
	
    getch();  
    closegraph();  
    return 0;  
}
