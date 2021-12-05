#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>


 void show_screen( );

 void apply_pivot_point_rotation(const int,int [],float,const int,const int);
 void multiply_matrices(const float[3],const float[3][3],float[3]);

 void Polygon(const int,const int []);
 void Line(const int,const int,const int,const int);


 int main( )
    {
       int driver=VGA;
       int mode=VGAHI;

       initgraph(&driver,&mode,NULL);

       show_screen( );

       int polygon_points[8]={ 250,290, 320,190, 390,290, 250,290 };

       setcolor(15);
     Polygon(5,polygon_points);

       setcolor(15);
       settextstyle(0,0,1);
     outtextxy(50,400,"*** (320,240) is taken as Pivot Point.");
     outtextxy(50,415,"*** Use \'+\' and \'-\' Keys to apply Rotation.");

       int key_code=0;

       char Key=NULL;

       do
      {
         Key=NULL;
         key_code=0;

         Key=getch( );
         key_code=int(Key);

         if(key_code==0)
        {
           Key=getch( );
           key_code=int(Key);
        }

         if(key_code==27)
        break;

         else if(key_code==43)
        {
           setfillstyle(1,0);
             bar(40,70,600,410);

           apply_pivot_point_rotation(4,polygon_points,5,320,240);

           setcolor(10);
             Polygon(4,polygon_points);
        }

         else if(key_code==45)
        {
           setfillstyle(1,0);
             bar(40,70,600,410);

           apply_pivot_point_rotation(4,polygon_points,-5,320,240);

           setcolor(12);
             Polygon(4,polygon_points);
        }
      }
       while(1);

       return 0;
    }


 //--------------------  apply_pivot_point_rotation( )  ------------------//


 void apply_pivot_point_rotation(const int n,int coordinates[],
                      float angle,const int xr,const int yr)
    {
       angle*=(M_PI/180);

       for(int count_1=0;count_1<n;count_1++)
      {
         float matrix_a[3]={coordinates[(count_1*2)],
                         coordinates[((count_1*2)+1)],1};

         float temp_1=(((1-cos(angle))*xr)+(yr*sin(angle)));
         float temp_2=(((1-cos(angle))*yr)-(xr*sin(angle)));

         float matrix_b[3][3]={ { cos(angle),sin(angle),0 } ,
                    { -sin(angle),cos(angle),0 } ,
                        { temp_1,temp_2,1 } };
         float matrix_c[3]={0};

         multiply_matrices(matrix_a,matrix_b,matrix_c);

         coordinates[(count_1*2)]=(int)(matrix_c[0]+0.5);
         coordinates[((count_1*2)+1)]=(int)(matrix_c[1]+0.5);
      }
    }

 /************************************************************************/
 //----------------------  multiply_matrices( )  ------------------------//
 /************************************************************************/

 void multiply_matrices(const float matrix_1[3],
                   const float matrix_2[3][3],float matrix_3[3])
    {
       for(int count_1=0;count_1<3;count_1++)
      {
         for(int count_2=0;count_2<3;count_2++)
        matrix_3[count_1]+=
               (matrix_1[count_2]*matrix_2[count_2][count_1]);
      }
    }


 //-----------------------------  Polygon( )  ----------------------------//


 void Polygon(const int n,const int coordinates[])
    {
       if(n>=2)
      {
         Line(coordinates[0],coordinates[1],
                         coordinates[2],coordinates[3]);

         for(int count=1;count<(n-1);count++)
        Line(coordinates[(count*2)],coordinates[((count*2)+1)],
                        coordinates[((count+1)*2)],
                        coordinates[(((count+1)*2)+1)]);
      }
    }


 //--------------------------  Line( )  ------------------------//


 void Line(const int x_1,const int y_1,const int x_2,const int y_2)
    {
       int color=getcolor( );

       int x1=x_1;
       int y1=y_1;

       int x2=x_2;
       int y2=y_2;

       if(x_1>x_2)
      {
         x1=x_2;
         y1=y_2;

         x2=x_1;
         y2=y_1;
      }

       int dx=abs(x2-x1);
       int dy=abs(y2-y1);
       int inc_dec=((y2>=y1)?1:-1);

       if(dx>dy)
      {
         int two_dy=(2*dy);
         int two_dy_dx=(2*(dy-dx));
         int p=((2*dy)-dx);

         int x=x1;
         int y=y1;

         putpixel(x,y,color);

         while(x<x2)
        {
           x++;

           if(p<0)
              p+=two_dy;

           else
              {
             y+=inc_dec;
             p+=two_dy_dx;
              }

           putpixel(x,y,color);
        }
      }

       else
      {
         int two_dx=(2*dx);
         int two_dx_dy=(2*(dx-dy));
         int p=((2*dx)-dy);

         int x=x1;
         int y=y1;

         putpixel(x,y,color);

         while(y!=y2)
        {
           y+=inc_dec;

           if(p<0)
              p+=two_dx;

           else
              {
             x++;
             p+=two_dx_dy;
              }

           putpixel(x,y,color);
        }
      }
    }


 //--------------------------  show_screen( )  ---------------------------//


 void show_screen( )
    {
       setfillstyle(1,1);
     bar(140,26,485,38);

       settextstyle(0,0,1);
     setcolor(15);
       outtextxy(5,5,"******************************************************************************");
       outtextxy(5,17,"*-**************************************************************************-*");
       outtextxy(5,29,"*--------------                                              ----------------*");
       outtextxy(5,41,"*-**************************************************************************-*");
       outtextxy(5,53,"*-**************************************************************************-*");

     setcolor(11);
       outtextxy(150,29,"Rotation Transformation along Pivot Point");

     setcolor(15);

       for(int count=0;count<=30;count++)
          outtextxy(5,(65+(count*12)),"*-*");

       outtextxy(5,438,"*-**************************************************************************-*");
       outtextxy(5,450,"*-------------------------                          -------------------------*");
       outtextxy(5,462,"******************************************************************************");

     setcolor(12);
       outtextxy(229,450,"Press any Key to exit.");
    }
