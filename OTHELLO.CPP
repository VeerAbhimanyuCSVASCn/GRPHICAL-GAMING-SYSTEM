#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int a[8][8];

void othelo()
{      setbkcolor(0);
int t=170;
char a[]={t,85,t,85,t,85,t,85};
setfillpattern(a,1);
settextstyle(10,0,7);
setcolor(12);
outtextxy(150,120,"Othelo");
floodfill(1,1,12);
line(150,260,450,260);
setcolor(12);
line(175,263,475,263);
delay(1500);
cleardevice();
}





void welcome()
{setbkcolor(0);
int t=160;
char a[]={t,85,t,85,t,85,t,85};
setfillpattern(a,1);
settextstyle(1,0,8);
setcolor(1);
outtextxy(50,120,"Wel-Come");
floodfill(1,1,1);
delay(1500);
cleardevice();
}



	 void piece1(int ,int);
	 void piece2(int ,int);


void board(int qwerty)
{
if(qwerty==1)
{ setcolor(15);
setfillstyle(1,15);
fillellipse(40,160,30,30);
}


if(qwerty==2)
{
setcolor(0);
setfillstyle(1,0);
fillellipse(40,160,30,30);
}



 for(int z=0;z<8;z++)
 for(int y=0;y<8;y++)
 {

 if(a[y][z]==1)
 piece2(z+1,y+1);

 if(a[y][z]==2)
 piece1(z+1,y+1);
 }


 int t=170;
char a[]={t,85,t,85,t,85,t,85};
setfillpattern(a,1);
floodfill(1,1,1);
setcolor(3);
rectangle(80,1,560,479);

for(int i=0;i<480;i=i+60)
   {
    line(80,i+1,560,i+1);
    line(i+80,1,i+80,480);
   }
}


void piece1(int x=4,int y=6)
{ setcolor(15);
setfillstyle(1,15);
fillellipse(110+((x-1)*60),31+((y-1)*60),25,25);
sound(1200);
delay(50);
nosound();
}


void piece2(int x=4,int y=6)
{ setcolor(0);
setfillstyle(0,15);
fillellipse(110+((x-1)*60),31+((y-1)*60),25,25);
sound(200);
delay(50);
nosound();
}



int H(int r, int c, int i)
{   int k=0;
    int cc=c-1,j;
    while(a[r][cc]!=i && a[r][cc]!=0  &&  cc>=0)
    {        cc=cc-1;    }
    if(  (a[r][cc]==0 || cc==-1  ||  cc==c-1)  )
	{            goto ab;}

    for( j=cc;j<=c;j++)
    {        a[r][j]=i;    }

    k=1;
    ab:
    cc=c+1;
    while(a[r][cc]!=i && a[r][cc]!=0  &&  cc<=8)
    {
	cc=cc+1;
    }
    if(a[r][cc]==0 || cc==9  ||cc==c+1)
      {
	goto cd;
      }
    for( j=cc;j>=c;j--)
    {
	a[r][j]=i;
    }
    k=1;
    cd:
return k;
}
int V(int r, int c, int i)
{   int k=0;
    int rr=r-1,j;
    while(a[rr][c]!=i && a[rr][c]!=0  &&  rr>=0)
    {        rr=rr-1;    }
    if(  (a[rr][c]==0 || rr==-1  ||  rr==r-1)  )
	{            goto ab;}

    for( j=rr;j<=r;j++)
    {        a[j][c]=i;    }
    k=1;
    ab:
    rr=r+1;
    while(a[rr][c]!=i && a[rr][c]!=0  &&  rr<=8)
    {
	rr=rr+1;
    }

    if(a[rr][c]==0 || rr==9  ||rr==r+1)
      {
	goto cd;
      }

    for( j=rr;j>=r;j--)
    {
	a[j][c]=i;
    }
    k=1;

    cd:

return k;
}

int D(int r, int c, int i)
{   int k=0;
    int rr=r-1,cc=c-1,j,qw;
    while(a[rr][cc]!=i && a[rr][cc]!=0  &&  rr>=0 && cc>=0)
    {        rr=rr-1;
		cc=cc-1;
    }

    if(  (a[rr][cc]==0 || rr==-1  ||  rr==r-1 || cc==c-1 || cc==-1 )  )
	{            goto ab; }



    for( j=rr,qw=cc;j<=r;j++,qw++)
    {        a[j][qw]=i;    }

    k=1;
    ab:
    rr=r+1;
    cc=c+1;
    while(a[rr][cc]!=i && a[rr][cc]!=0  &&  rr<=8 && cc<=8)
    {
	rr=rr+1;
	cc=cc+1;
    }

    if(a[rr][cc]==0 || rr==9  ||rr==r+1 ||  cc==9  ||  cc==c+1)
      {
	goto cd;
      }

     for( j=rr,qw=cc;j>=r;j--,qw--)
    {        a[j][qw]=i;    }


    k=1;

    cd:

return k;
}




int O(int r, int c, int i)
{   int k=0;
    int rr=r-1,cc=c+1,j,qw;
    while(a[rr][cc]!=i && a[rr][cc]!=0  &&  rr>=0 && cc<=8)
    {        rr=rr-1;
		cc=cc+1;
    }

    if(  (a[rr][cc]==0 || rr==-1  ||  rr==r-1 || cc==c+1 || cc==-1 )  )
	{            goto ab; }



    for( j=rr,k=cc;j<=r;j++,k--)
    {        a[j][k]=i;    }

    k=1;
    ab:
    rr=r+1;
    cc=c-1;
    while(a[rr][cc]!=i && a[rr][cc]!=0  &&  rr<=8 && cc>=0)
    {
	rr=rr+1;
	cc=cc-1;
    }

    if(a[rr][cc]==0 || rr==9  ||rr==r+1 ||  cc==9  ||  cc==c-1)
      {
	goto cd;
      }

     for(j=rr,k=cc;j>=r;j--,k++)
    {        a[j][k]=i;    }


    k=1;

    cd:

return k;
}

int plot(int r,int c,int i)
{
    if(a[r][c]==0)
    {
       int x=H(r,c,i);int y=V(r,c,i);int z=D(r,c,i);int xx=O(r,c,i);
       if  (x||y||z||xx)
       {
	return 0;}
    }

	return 1;
}


int player(int i)
{   int b;
    ab:   gotoxy(1,1);
    cin>>b;
    int k=plot(b/10,b%10,i);

    if(k==1)
      {
       cout<<"WRONG MOVE";
	goto ab;
      }
    return 0;
}

   int winner(int i)
   {
   cleardevice();

	setbkcolor(9);
	setcolor(1);

	settextstyle(4, 0, 4);
	if(i==1)
	outtextxy(130,185 ,"PLAYER 1 won the game");
	else
	outtextxy(130,185 ,"PLAYER 2 won the game");
   return 0;
   }




void number()
{ setcolor(15);
char *p=new char[3];
  for(int i=0;i<=7;i++)
  {
	for(int j=0;j<=7;j++)
	{
	     p[0]=char(j+48);
	     p[1]=char(i+48);
	     p[2]='\0';
	     setcolor(15);
	     settextstyle(12,0,1);

	outtextxy(163+((i-1)*60),85+((j-1)*60),p);
	}
  }


}




void main()
{
int abhi=DETECT,bha;
initgraph(&abhi,&bha,"C:/TURBOC3/BGI") ;
/*welcome();
othelo();
cleardevice();
  */
board(1);
board(1);
board(1);
      number();
 a[3][3]=a[4][4]=1;
    a[3][4]=a[4][3]=2;

   for(int i=0;i<30;i++)
   {
    player(1);  board(1);
    player(2);   board(2);
    }
    int q=0,r=0;

for(i=0;i<8;i++)
{
	for(int j=0;j<8;j++)
	{
	if(a[i][j]==1)
	++q;
	else
	++r;
	}
}
	cleardevice();

	if(q>r)
		winner(q) ;
	else
		winner(r);



getch();
}