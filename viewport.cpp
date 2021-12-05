#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main ()
{
  int wxmax, wymax, wxmin, wymin;
  int vxmax, vymax, vxmin, vymin;
  float sx, sy;
  int x, x1, x2, y, y1, y2;
  int gd = DETECT, gm;
  initgraph (&gd, &gm, NULL");
  printf ("\n****** Window to Viewport ***********\n");
  printf ("Enter the coordinates for triangle \n x and y = ");
  scanf ("%d %d", &x, &y);
  printf ("\n x1 and y1 = ");
  scanf ("%d %d", &x1, &y1);
  printf ("\n x2 and y2 = ");
  scanf ("%d %d", &x2, &y2);
  printf ("Please enter Window coordinates \n First enter XMax, YMax =");
  scanf ("%d %d", &wxmax, &wymax);
  printf ("\n Now, enter XMin, YMin =");
  scanf ("%d %d", &wxmin, &wymin);
  cleardevice ();
  delay (50);      
  //Window 
  rectangle (wxmin, wymin, wxmax, wymax);
  outtextxy (wxmin, wymin - 10, "Window");  
  //drawing a triangle 
  line (x, y, x1, y1);
  line (x1, y1, x2, y2);
  line (x2, y2, x, y);  
  // viewport 
  vxmin = 300;
  vymin = 30;
  vxmax = 550;
  vymax = 350;
  rectangle (vxmin, vymin, vxmax, vymax);
  outtextxy (vxmin, vymin - 10, "Viewport");  
  // calculatng Sx and Sy 
  sx = (float) (vxmax - vxmin) / (wxmax - wxmin);
  sy = (float) (vymax - vymin) / (wymax - wymin);
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
  getch ();
  closegraph ();
}