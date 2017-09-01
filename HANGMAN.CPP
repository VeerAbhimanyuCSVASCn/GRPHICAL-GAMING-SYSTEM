#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>

void arrow(int r=2)
{ setcolor(15);
if(r==1)
setcolor(14);

randomize();
line(5,15,75,15);
   int a[8];
   a[0]=75;a[1]=12;
   a[2]=75;a[3]=18;
   a[4]=80;a[5]=15;
   a[6]=75;a[7]=12;
   drawpoly(4,a);
	 void far*aa;
   getimage(1,1,95,22,aa);
   setcolor(0);
   setfillstyle(1,0);
   bar(1,1,95,22);

   for(int i=-25;i<1000;i++)
   {  if(r==2)
	{
	  putimage(i-1,187,aa,1);
	  putimage(i,187,aa,2);
	 }


	 if(r==1)
	 {
	 putimage(i-1,14,aa,1);
	  putimage(i,14,aa,2);
	 }

	 if(r==3)
	 { int s=random(500);

		putimage(i-1,s,aa,1);
		  putimage(i,s,aa,2);
	 }
	delay(1);

   }

}

    int deadman()
    {
    cleardevice();

    }

int hang(int i)

{	setfillstyle(1,15);
	if(i==1)
	goto ab;
	bar(463,1,463,145);
	ab:
	setcolor(0);
	fillellipse(463,172,7,15);
	bar(465,186,465,198);
	bar(462,186,462,198);
	fillellipse(462,150,7,8);
	setfillstyle(1,0);
	fillellipse(460,147,1,1);
	fillellipse(465,147,1,1);
	line(460,151,464,151);
	bar(460,168,461,187);
	bar(466,168,467,187);
   return 0;
}



int box(int i)
{
      setfillstyle(i,4);
      bar(450,200,490,240);
      floodfill(451,201,0);
   return 0;
}


int won(int ii)
{   float i,j;
if(ii==1)
{ arrow(1); delay(120);
cleardevice();
setcolor(15);
settextstyle(4,1,8);
outtextxy(1,1,"CONGRATS");
settextstyle(5,0,14);
outtextxy(175,10,"YOU");
setcolor(10);
settextstyle(7,0,4);
outtextxy(215,175,"SAVED HIM");
setcolor(14);
delay(1200);
}

else
{arrow(2);
delay(120);
cleardevice();
setcolor(15);
settextstyle(4,1,7);
outtextxy(1,1,"HE IS DEAD");
settextstyle(5,0,8);
outtextxy(175,10,"TUMSE");
setcolor(10);
settextstyle(7,0,4);
outtextxy(215,255,"NA HO PAYE ...");
setcolor(14);
}




for(i=0,j=0;j<=90;i=i+0.1,j=j+0.006)
{
putpixel(i,40*tan(i)+120,1);
}

 delay(1200);
 hang(ii);
return 0;
deadman();
}



int play(char*a,char *b,int c)
{
	hang(0);
	box(1);

	int i=0,s=0;
	char r;

for( i=0;i<3;i++)
{  ab:
 r=getch(); int j=0;
 for( j=1;j<(c-1)/2;j++)
   if(b[j]==r)
   { if(++s == ((c-1)/2) )
	{ cout<<r;goto cd;}

	goto ab;
 }
}
won(0);
goto jh;

cd:
won(1);

jh:
return 0;
}


void game(char *a,char *b,int c)
{    char *ba=new char[(c-1)/2+1];  int ir=0;
    for(int i=0;i<c;i++)
    {
	  ba[ir]=a[i];
	 for(int j=0;j<(c-1)/2;j++)
	  {
		if(ba[ir]==b[j])
			 {ba[ir]='-';}

	  }
	  ++ir;
	  if(ir==(c-1))
	  goto ab;
	  }       ab:
	  ba[c-1]='\0';
	  outtextxy(50,320,ba);
	    play(a,b,c);

}





void puzzle()
{
 char a[]="abhimanyusingh";
 int r=sizeof(a);
 randomize();     int s=0,i=0;
 char *p=new char[(r-1)/2+1];int t=0;
 for( i=0;i<(r-1)/2;i++)
 {      ab:
	p[i]=a[random(sizeof(a)-1)];
	for(int j=0;j<i;j++)
	 {
		if(p[j]==p[i]&&s<=2500)
		  {t=1;++s;}
		else
		  t=0;


	 }

	 if(t==1)
	   goto ab;
  }
      p[i]='\0';
game(a,p,r);
}






void main()
{
int a=DETECT,b,i=14,r=0;
initgraph(&a,&b,"C:/TURBOC3/BGI");
ab:
setcolor(15);
settextstyle(4,0,5);
outtextxy(1,120,"Save The Hang Man");
setcolor(i);
outtextxy(280,160,"IF YOU CAN...");
delay(500);
if(r==0)
{ i=4;++r;
goto ab;
}
delay(500);
cleardevice();
     float l,k;
for(l=0,k=0;k<=90;l=l+0.1,k=k+0.006)
{
putpixel(l,40*tan(l)+120,1);
}

puzzle();
getch();
}