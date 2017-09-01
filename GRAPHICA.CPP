#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


static int a[3][3];


	 int check(int i)
	 { if((a[i/3][1]==a[i/3][2]&&a[i/3][2]==a[i/3][0])||(a[1][i%3]==a[2][i%3]&&a[1][i%3]==a[0][i%3]) )
	    return 0;
	    if((a[1][1]==a[2][2]&&a[2][2]==a[0][0])&&a[i/3][i%3]==a[0][0])
	    return 0;

	    if((a[2][0]==a[1][1]&&a[1][1]==a[0][2])&& a[i/3][i%3]==a[2][0])
	    {
	    return 0;
	    }
	    return 1;
	 }





	void puto(int i)
	{
	circle(  (50+(70*(i%3)))  ,  (90+(70*(i/3)))  ,  8  );
	circle(  (50+(70*(i%3)))  ,  (90+(70*(i/3)))  ,  3  );
	circle(  (50+(70*(i%3)))  ,  (90+(70*(i/3)))  ,  4  );
	circle(  (50+(70*(i%3)))  ,  (90+(70*(i/3)))  ,  1  );
	}











	int player1()
	{  xy:
	 gotoxy(50,10);
	int i;
	cin>>i; if(i==0) goto xy;
	i=i-1;
	if(a[i/3][i%3]==0)
	{a[i/3][i%3]=10;}
	else
	{
	gotoxy(50,12);
	delay(220);
	cout<<"wrong move ";
	 cout<<"\b\b\b\b\b\b\b\b\b\b\b           ";
	 goto xy;}
	 puto(i);
	 return i;
	 }





	void putx(int i)
	{
	 bar( (40+(70*(i%3)))  ,  (80+(70*(i/3))) , (50+(70*(i%3)))  ,  (90+(70*(i/3))) );
	  rectangle( (38+(70*(i%3)))  ,  (78+(70*(i/3))) , (52+(70*(i%3)))  ,  (92+(70*(i/3))) );}





	 int player2()
	{
	xy:
	gotoxy(50,10);
	int i;
	cin>>i;
	if(i==0)
	goto xy;
	i=i-1;
	if(a[i/3][i%3]==0)
	{a[i/3][i%3]=20;}
	else
	{
	gotoxy(50,12);
	cout<<"wrong move ";
	 delay(25);
	 cout<<"\b\b\b\b\b\b\b\b\b\b\b                  ";
	 goto xy;}
	 putx(i);
	 return i;
	 }







     void main()
	{         int r=0;
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
	cleardevice();
	setbkcolor(3);
	   setcolor(1);
	     line(70,70,70,250);
	     line(170,70,170,250);
	     line(5,110,235,110);
	     line(5,195,235,195);
	     line(70,70,70,235);
	     line(330,5,330,470);
	     line(333,5,333,470);
	     line(329,5,329,470);
	     line(334,5,334,470);

	    setcolor(1);
settextstyle(1, 0, 3);
outtextxy(330,45 ," ENTER The BOX NUMBER ");


	     int n=1,j;


	 while(n)
	   {      ++r;

	       j=player1();
	       n=check(j);

	       if(n==0)
	       {       cleardevice();

	      setbkcolor(9);
	       setcolor(1);

settextstyle(4, 0, 4);
outtextxy(70,185 ,"..::PLAYER 1 WON THE GAME::..");


		break;}

		      ++r;
		      if(r>=9)
		      goto ab;

	     j=player2();
	      n=check(j);


	      if(n==0)
	      {
	      cleardevice();

	      setbkcolor(12);
	      setcolor(4);

settextstyle(4, 0, 4);
outtextxy(70,185 ,"..::PLAYER 2 WON THE GAME::..");

	      break;}

     }        ab:
	     if(r>=8)
	     {    cleardevice();

	      setbkcolor(9);
	       setcolor(1);

settextstyle(4, 0, 4);
outtextxy(130,185 ,"M A T C H - D R A W n");
	     }
	     delay(1000);
	}