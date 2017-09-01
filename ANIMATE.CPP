#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>
 
 
void DrawCrystal(int left, int top, int right, int bottom, double rang, int color)
{
    static const double PI = 3.1415926535;
 
    double cx = (left + right) / 2;
    double cy = (top + bottom) / 2;
 
    double radius = (right - left) / 2;
    double yr = radius / 2;
 
    {
 
      double tempangle = rang;
      double tempangle2 = rang + 90;
      double a = (radius - (tempangle / 90 * yr)) * cos(tempangle * PI / 180);
      double b = (radius - (tempangle / 90 * yr)) * sin(tempangle * PI / 180);
 
      double x1 = cx + a;
      double y1 = cy + b;
      double x2 = cx - a;
      double y2 = cy - b;
 
      double c = ((radius - yr) + ((tempangle2 - 90) / 90 * yr)) * cos(tempangle2 * PI / 180);
      double d = ((radius - yr) + ((tempangle2 - 90) / 90 * yr)) * sin(tempangle2 * PI / 180);
      double x3 = cx + c;
      double y3 = cy + d;
      double x4 = cx - c;
      double y4 = cy - d;
 
      setcolor(color);
      line(x1, y1, x3, y3);
      line(x3, y3, x2, y2);
      line(x2, y2, x4, y4);
      line(x4, y4, x1, y1);
 
      line(x1, y1, cx, top);
      line(x3, y3, cx, top);
      line(x2, y2, cx, top);
      line(x4, y4, cx, top);
 
      line(x1, y1, cx, bottom);
      line(x3, y3, cx, bottom);
      line(x2, y2, cx, bottom);
      line(x4, y4, cx, bottom);
 
    }
}
void main()
{
      int i, grd, grm;
      detectgraph(&grd,&grm);
      initgraph(&grd, &grm, "C:/TURBOC3/BGI");
      int h=0;
      while(!kbhit())
      {       ++h;
      for(i = 0; i <= 90; i += 5)
      {
	    DrawCrystal(200, 50, 350, 350, i, h);
	    delay(20);
	    if(i < 90)
		  DrawCrystal(200, 50, 350, 350, i, 0);
      }
      cleardevice();
       }
      getch();
      closegraph();
}