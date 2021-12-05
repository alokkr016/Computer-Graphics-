#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
int main()
{
 int gd=DETECT,gm;
 int i;
 initgraph (&gd,&gm," ");
 int x[4],y[4];
 cout<< "Enter the x- and y-coordinates of the four control points.\n";
 for (i=0; i<4; i++)
 cin>>x[i]>>y[i];
 double u;
 for (u= 0.0; u<1.0; u=u+0.0005)
 {
double xt = pow (1-u,3) * x[0] + 3 * u * pow (1-u,2) * x[1] + 3 * pow (u, 2) * (1-u) * x[2] + pow (u, 3) * x[3];
double yt = pow (1-u,3) * y[0] + 3 * u * pow (1-u, 2) * y[1] + 3 * pow (u, 2) * (1-u) * y[2] + pow (u,3) * y[3];
putpixel (xt, yt, YELLOW);
 }
 getch();
 return 0;
}
