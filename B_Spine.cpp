#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

double basis(int i,int k,double knot[],double stpos)
{
    double val; //recursion
    if(k==1)
    {
        if(knot[i]<=stpos&&stpos<knot[i+1])
            return(1);
        else
        return(0);
    }
        val=((stpos-knot[i])*basis(i,k-1,knot,stpos))/(knot[i+k-1]-knot[i])+((knot[i+k]-stpos)*basis(i+1,k -1,knot,stpos))/(knot[i+k]-knot[i+1]);
        return(val);
}
int main()
{
    int gm,gd=DETECT;
    
    int xc[6]={10,80,250,400,500,550}; //control points
    int yc[6]={180,130,10,700,50,70};
    double knot[]={0,1,2,3,4,5,6,7}; //knot vector

    initgraph(&gd,&gm,NULL);
    int k=4,i;
    double bas,stpos=knot[k-1],endpos=knot[8-k],slice=(endpos-stpos)/100;
    double x,y,lx,ly;
    lx=xc[0]; //first point
    ly=yc[0];
    for(;stpos<endpos;stpos+=slice)
    {
        x=y=0;
        for(i=1;i<=6;i++)
        {
            bas=basis(i-1,k,knot,stpos);
            x=x+(xc[i-1]*bas); //x,y for bspline curves
            y=y+(yc[i-1]*bas);
        }
        line(lx,ly,x,y);
        lx=x; //last point
        ly=y;
    }
    getch();
    return 0;
}

