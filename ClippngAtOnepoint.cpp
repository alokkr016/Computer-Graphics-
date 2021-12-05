#include<bits/stdc++.h>
#include<conio.h> 
#include<graphics.h> 
#include<math.h> 

using namespace std;
void Window() 
{
    line(150,100,450,100); 
    line(450,100,450,350); 
    line(450,350,150,350); 
    line(150,350,150,100);
}
void Code(char c[4],float x,float y)
{
    c[0]=(x<150)?'1':'0';
    c[1]=(x>450)?'1':'0';
    c[2]=(y<100)?'1':'0';
    c[3]=(y>350)?'1':'0';
}
void Clipping (char c[],char d[],float &x,float &y,float m)
{
    int flag=1,i=0; 
    for (i=0;i<4;i++)
{
if(c[i]!='0' && d[i]!='0')
{
    flag=0; break;
}
if(flag)
{ 
    if(c[0]!='0'){
        y=m*(150-x)+y; x=150;
}
else if(c[1]!='0'){
    y=m*(450-x)+y; x=450;
}
else if(c[2]!='0')
{
    x=((100-y)/m)+x; y=100;
} 
else if(c[3]!='0')
{
    x=((350-y)/m)+x; y=350;
}
}
if (flag==0)
    cout<<"Line lying outside";
}
}
int main()
{
    int gdriver = DETECT, gmode, errorcode; 
    float x1,y1,x2,y2;
    float m;
    char c[4],d[4]; 
    // clrscr();
    initgraph(&gdriver, &gmode, NULL); 
    cout<<"Enter coordinates of the line (x1,x2) and (x2,y2): "; 
    cin>>x1>>y1>>x2>>y2;
    cout<<"*********Before clipping*********"; 
    Window();
    line(x1,y1,x2,y2); 
    getch(); 
    cleardevice();
    m=float((y2-y1)/(x2-x1)); 
    Code(c,x1,y1);
    Code(d,x2,y2) ;
    Clipping(c,d,x1,y1,m);
    Clipping(d,c,x2,y2,m); 
    cout<<"\n**********After Clipping*********"; 
    Window();
    line(x1,y1,x2,y2); 
    getch(); 
    closegraph();
    return 0;
}
