#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<math.h>
#include<time.h>
#include<dos.h>
#include<stdlib.h>

struct remind
{
char title[50];
char data[2000];
int year;
int mon;
int date;
int hour;
int min;
};



struct dict
{
char word[20];
char detail[80];
};



void main()
{
_setcursortype(_NOCURSOR);	    //page 1
 randomize();

textbackground(4);
textcolor(14); clrscr();
char d=176;

for(int a=0;a<80;a++)
cout<<d;

gotoxy(1,25);

for(a=0;a<79;a++)
cout<<d;

for(a=1;a<=25;a++)
{ gotoxy(1,a);
cout<<d;}

for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;}



d=177;

gotoxy(1,1);
for(a=0;a<80;a++)
{
cout<<d;
delay(20);
}


for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;
delay(20);
}

for(a=79;a>=1;a--)
{ gotoxy(a,25);
cout<<d;
delay(20);
}
for(a=25;a>=1;a--)
{
gotoxy(1,a);
cout<<d;
delay(20);
}

d=178;

gotoxy(1,1);
for(a=0;a<80;a++)
{
cout<<d;
delay(20);
}


for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;
delay(20);
}
for(a=1;a<25;a++)
{ gotoxy(79,a);
cout<<d;
delay(0);
}

for(a=79;a>=1;a--)
{ gotoxy(a,25);
cout<<d;
delay(20);
}
for(a=25;a>=1;a--)
{
gotoxy(1,a);
cout<<d;
delay(20);
}
for(a=25;a>=1;a--)
{
gotoxy(2,a);
cout<<d;
delay(0);
}
gotoxy(14,40);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                         ";
lowvideo();
textcolor(0);
cprintf("LOADING C++ virtual computer");
gotoxy(1,13);
cout<<d<<d<<"\n\n"<<d<<d<<"              ";
d=219;
for(a=0;a<=48;a++)
{delay(45);
cout<<d; }

clrscr();

textcolor(14);
clrscr();
d=178;

gotoxy(1,1);
for(a=0;a<80;a++)
{
cout<<d;
}


for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;
}
for(a=1;a<25;a++)
{ gotoxy(79,a);
cout<<d;
}

for(a=79;a>=1;a--)
{ gotoxy(a,25);
cout<<d;
}
for(a=25;a>=1;a--)
{
gotoxy(1,a);
cout<<d;
}
for(a=25;a>=1;a--)
{
gotoxy(2,a);
cout<<d;
}
gotoxy(14,40);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                            ";
textcolor(497);
cprintf("          DONE");
gotoxy(1,13);
cout<<d<<d;
delay(2022);
textbackground(0);
for(int l=0;l<=25;l++)
{ delay(20);
gotoxy(1,l);
textbackground(5); }
textcolor(14);
clrscr();
d=271;

for(a=0;a<80;a++)
cout<<d;

gotoxy(1,25);

for(a=0;a<79;a++)
cout<<d;
d=271;

for(a=1;a<=25;a++)
{ textcolor(4);
 gotoxy(1,a);
cout<<d;}

for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;}

d=174;

for(a=76;a>2;a--)
{ delay(20);
gotoxy(a,5);
cout<<d;}

gotoxy(3,20);
d=175;
for(a=0;a<75;a++)
{  delay(20);
cout<<d;}

gotoxy(38,12);
textcolor(1);
cprintf("WELCOME");
gotoxy(80,25);
  delay(2000);


				       //PAGE 2
 textbackground(0);

clrscr();
textbackground(9); clrscr();
cout<<"";
textcolor(12);
clrscr();
d=271;

for(a=0;a<80;a++)
cout<<d;

gotoxy(1,25);

for(a=0;a<79;a++)
cout<<d;
d=271;

for(a=1;a<=25;a++)
{ textcolor(4);
 gotoxy(1,a);
cout<<d;}

for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;}

d=174;

for(a=76;a>2;a--)
{ delay(20);
gotoxy(a,5);
cout<<d;}

gotoxy(3,20);
d=175;
for(a=0;a<75;a++)
{  delay(20);
cout<<d;}

gotoxy(18,12);
textcolor(11);
cprintf("PRO-Z-CET  CYBER RECORD \n\n\n");
textcolor(14);
cprintf(" IN VIRTUAL COMPUTERS");
gotoxy(80,25);
  delay(2000);

  clrscr();

					//last
textbackground(0);
		 clrscr();			clrscr();

textbackground(4);textcolor(0);        clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
textcolor(2);
gotoxy(1,1);
d=175;
for(a=0;a<80;a++)
cout<<d;

gotoxy(1,25);

for(a=0;a<79;a++)
cout<<d;

for(a=1;a<=25;a++)
{ gotoxy(1,a);
cout<<d;}

for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;}
for(a=14;a<=24;a++)
{gotoxy(2,a);
textbackground(1);
cprintf("                                                                              ");
}    textbackground(4);
gotoxy(33,3);
textcolor(14);
cprintf("VIRTUAL COMPUTERS")
; gotoxy(4,6);   textcolor(1);
cprintf("prepared by:-\n\n\n"); textcolor(496);
cprintf("VEER ABHIMANYU SINGH CSVA");
textcolor(14);
cprintf("\n\n\nCLASS 12 science");
gotoxy(4,17);textbackground(0);   textcolor(506);
cprintf(" PROJECT STARTED ON - 24 AUGUST 2014 \n\n\n and completed on 30 OCTOBER 2014 ");
d=219;
for(a=7;a<=75;a++)
{
gotoxy(39,22);
 delay(20);
cout<<a+25<<" % ";
gotoxy(a,23) ;
cout<<d;
}
clrscr();
textbackground(1);
textcolor(507);
gotoxy(29,15);
cprintf("  CLICK FOR  COMAND-BAR  ");
getche();
 csva:
clrscr();





      {struct date d;
       struct  time t;
       int day,year,min,hour,month;
       clrscr();
       fstream abhi,amn;
       remind  me;    clrscr();
       abhi.open("reminder.txt",ios::in|ios::out|ios::binary);
       amn.open("new_file.txt",ios::in|ios::out|ios::binary);
       clrscr();


       while(abhi.read((char*)&me,sizeof(me)))
   {
   gettime(&t);
   getdate(&d);


   if(
   (t.ti_hour==me.hour&&t.ti_min>=me.min
   ||t.ti_hour==me.hour+1
   ||t.ti_hour==me.hour+2
   ||t.ti_hour==me.hour+3
   ||t.ti_hour==me.hour+4
   ||t.ti_hour==me.hour+5
   ||t.ti_hour==me.hour+6
   ||t.ti_hour==me.hour+7
   ||t.ti_hour==me.hour+8
   ||t.ti_hour==me.hour+9
   ||t.ti_hour==me.hour+10
   ||t.ti_hour==me.hour+11
   ||t.ti_hour==me.hour+12)
   &&
   (d.da_day==me.date
   &&d.da_mon==me.mon
   )||(d.da_year>=me.year))
  {
  _setcursortype(_NOCURSOR);
clrscr();
textcolor(14);
textbackground(5);
clrscr();
gotoxy(3,5);

   for(int a=6,c=74;a<=41;a++,c--)
     { gotoxy(a,6);
       cout<<(char)177;
       gotoxy(c,6);
       cout<<(char)177;
       delay(12);
     }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(9);
 textbackground(0);
 gotoxy(31,11);
 puts(me.title);
 delay(300) ;
clrscr();
cout<<"\n\n\n\n\n we have a REMINDER MESSAGE for you SIR / MADAM! - ";
gotoxy(5,5);
textcolor(11);
 textbackground(1);
 gotoxy(1,2);
 for(int q=0;q<80;q++)
 cprintf("*");
 gotoxy(1,24);
 for(q=0;q<80;q++)
 cprintf("*");
 gotoxy(15,8);
 puts(me.data);
 getch();
 break;
  }

  else
  {
  amn.write((char*)&me,sizeof(me));}

  }
  amn.close();

     abhi.close();

      remove("reminder.txt");
      rename("new_file","reminder.txt");
      }











		       _setcursortype(_NOCURSOR);
clrscr();
textcolor(14);
textbackground(5);clrscr();
d=271;

for( a=0;a<80;a++)
cout<<d;

gotoxy(1,25);

for(a=0;a<79;a++)
cout<<d;
d=271;

for(a=1;a<=25;a++)
{ textcolor(4);
 gotoxy(1,a);
cout<<d;}

for(a=1;a<25;a++)
{ gotoxy(80,a);
cout<<d;}

d=174;

for(a=76;a>2;a--)
{ delay(0);
gotoxy(a,5);
cout<<d;}

gotoxy(3,20);
d=175;
for(a=0;a<75;a++)
{  delay(0);
cout<<d;}
gotoxy(3,10);
textcolor(1);


cprintf(" -*QUIZ*-\n");
textcolor(12);
cprintf("-*REMINDER SET*-\n\n");
textcolor(14);
cprintf("-*CSVA'ns DICTIONARY*-\n\n");

textcolor(12);
cprintf("-*FRIENDSHIP METER*-\n");
textcolor(1);
cprintf("-*E_xit*-");
gotoxy(80,25);
gotoxy(37,23);
textbackground(0);
 cprintf("       ");
 gotoxy(40,23);
 textcolor(11);
 int aman;
 cin>> aman;













if(aman==4)





{{

  textbackground(1);
  textcolor(14);

clrscr();
int a,c,d=0,e=0,f;
float b;
char name1[80],name2[80];
cout<<endl;
for(a=1;a<=80;a++)
{
cout<<(char)287;
}
for(a=1;a<11;a++)
{
cout<<"\n";
}
cout<<"                                W E L   C O M E";
for(a=1;a<10;a++)
{
cout<<"\n";
}
for(a=1;a<=80;a++)
{
cout<<(char)286;
}
delay(1000);
clrscr();
for(a=1;a<=12;a++)
{
 cout<<endl;
 }
cout<<"                                        T O";
for(a=1;a<=11;a++)
cout<<"\n";
delay(1000);
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
cout<<(char)287;
}
for(a=1;a<10;a++)
{
cout<<endl;
}
cout<<"                          F R I E N D S H I P   M E T E R";
for(a=1;a<=10;a++)
{
cout<<endl;
}
for(a=1;a<=80;a++)
{
cout<<(char)286;
}
delay(1200);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                        ENTER THE NAME OF FIRST PERSON\n";
cout<<"\n\n                         ";
gets(name1);
delay(25);
clrscr();
for(a=1;a<=12;a++)
{
cout<<endl;
}
cout<<"                            PROCESSING please WAIT";
delay(1500);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                       ENTER THE NAME OF SECOND PERSON\n";
cout<<"\n\n                       ";
gets(name2);
delay(500);
clrscr();
for(a=0;name1[a]!='\0';a++)
{
  switch(name1[a])
  {
  case'a':
  c=1;
  break;  case'b': c=2; break; case'c':c=3; break;
  case'd':
  c=4;
  break;
  case'e':
  c=5;
  break;
  case'f':
  c=6;
  break;
  case'g':
  c=7;
  break;
  case'h':
  c=8;
  break;
  case'i':
  c=9;
  break;
  case'j':
  c=10;
  break;
  case'k':
  c=11;
  break;
  case'l':
  c=12;
  break;
  case'm':
  c=13;
  break;
  case'n':
  c=14;
  break;
  case'o':
  c=15;
  break;
  case'p':
  c=16;
  break;
  case'q':
  c=17;
  break;
  case'r':
  c=18;
  break;
  case's':
  c=19;
  break;
case't':
  c=20;
  break;
case'u':
  c=21;
  break;
case'v':
  c=22;
  break;
case'w':
  c=23;
  break;
case'x':
  c=24;
  break;
case'y':
  c=25;
  break;
case'z':
  c=26;
  break;
  }
  d=d+c;
  }
 for(a=0;name2[a]!='\0';a++)
{
  switch(name2[a])
  {
  case'a':
  c=1;
  break;
  case'b':
  c=2;
  break;
  case'c':
  c=3;
  break;
  case'd':
  c=4;
  break;
  case'e':
  c=5;
  break;
  case'f':
  c=6;
  break;
  case'g':
  c=7;
  break;
  case'h':
  c=8;
  break;
  case'i':
  c=9;
  break;
  case'j':
  c=10;
  break;
  case'k':
  c=11;
  break;
  case'l':
  c=12;
  break;
  case'm':
  c=13;
  break;
  case'n':
  c=14;
  break;
  case'o':
  c=15;
  break;
  case'p':
  c=16;
  break;
  case'q':
  c=17;
  break;
  case'r':
  c=18;
  break;
  case's':
  c=19;
  break;
case't':
  c=20;
  break;
case'u':
  c=21;
  break;
case'v':
  c=22;
  break;
case'w':
  c=23;
  break;
case'x':
  c=24;
  break;
case'y':
  c=25;
  break;
case'z':
  c=26;
  break;
  }
  e=e+c;
  }

     if(d<e)
     {
     b=(d*100.0/e);
     }

     if(e<d)
     {
     b=(e*100.0/d);
     }

     if(e==d)
     {
     b=78.25;
     }

     if(b<15)
     {
     b=34.23;
     }
     if(b>=100)
     {
     b=91.2;
     }



  for(a=1;a<12;a++)
  {
  cout<<endl;
  }
  cout<<"                          processing please wait";
  for(a=1;a<4;a++)
  {
  cout<<".";
  sleep(0);
  }
  clrscr();
  cout<<"\n\n\n\n\n";
  for(a=1;a<81;a++)
  {
  cout<<(char)287;
  }
  cout<<"\n\n                            YOUR FRINDSHIP METER IS";
  for(a=1;a<5;a++)
  {
  cout<<endl;
  }
  cout<<"                                   "<<b<<" %";
  for(a=1;a<8;a++)
  {
  cout<<endl;
  }
  for(a=1;a<81;a++)
  {
  cout<<(char)286;
  }
  delay(2500);
  clrscr();
  for(a=1;a<=12;a++)
  cout<<"\n";
  cout<<"                                     MADE  BY\n";
  cout<<"                               VEER ABHIMANYU SINGH\n";
  cout<<"                                     CSVA - XII";
  delay(2500);
  clrscr();
  for(a=1;a<13;a++)
  cout<<"\n";
  cout<<"                           THANK YOU FOR PLAYING WITH US";
  delay(3500);
  clrscr();
  goto csva;
}
}















 if(aman>=5)
 {    zx:
 clrscr();
 gotoxy(18,13);
 cprintf("WINDOWS is SHUTTING DOWN THANKS FOR USING IT");
 for(int mas=62;mas>=15;mas--)
 { gotoxy(mas,13);
 delay(105);
    clreol();
    }
 delay(40);
 exit(-1);
 }












 if(aman==1)
 {{      _setcursortype(_NOCURSOR);
textbackground(0);
clrscr();
randomize();
int p,b,score=0;
char e,name[50],arc[10];
b=random(1)+9;
 for(int a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+510;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }

   cout<<endl<<endl<<endl<<"\n\n\n";

   textcolor(9);
   cprintf("                                  you are most");
   cout<<endl<<endl<<endl<<endl;
   textcolor(500);
   cprintf("                                    WEL COME");
   cout<<endl<<endl<<endl<<endl;
   textcolor(2);

   cprintf("                            to CSVAn's quiz game show");
   cout<<"\n\n\n\n\n\n";


    b=random(1)+510;
 for(a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+9;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }

   delay(1500);
   clrscr();


     b=random(1)+500;
 for(a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+510;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }
   cout<<endl<<endl;
   textcolor(4);
   cout<<"  i\n";
    cprintf("    VEER ABHIMANYU SINGH ");textcolor(1);cprintf("\nWELCOMES\n YOU TO PLAY\nA FREE QUIZ GAME SHOW");
    cout<<endl<<endl<<"\n\n\n";
    textcolor(2);
    cprintf("                            we offer\n");cprintf(" for better programming");
    cout<<endl<<endl;
    cout<<"                              that's the moto of this game ";

    cout<<"\n\n\n\n\n\n";

      b=random(1)+510;
 for(a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+500;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }
   delay(1500);
   clrscr();


	for(b=1;b<=10;b++)
	{
	cout<<endl;
	}
	textcolor(4);
	cprintf("                    wanted to play the game click y for yes");
	cout<<endl<<endl;
	textcolor(14);
	cprintf("                            if not click n for no");
	cout<<endl;
	textcolor(2);
	cout<<"\n\n\n\n" ;
	cprintf("                            now enter your choice");
	cout<<"\n                                      ";
	cin>>e;
	if(e=='y')
	{
	clrscr();
for(int Z=1;Z<=12;Z++)
{
cout<<endl;}
textcolor(14);
cprintf("                                   thank you");
cout<<endl<<endl;
textcolor(2);
cprintf("                               for choosing  'yes' ");
textcolor(500);
cout<<endl<<endl<<endl;
cprintf("                               now click for rules");
cout<<endl<<endl<<endl<<endl<<endl;
getch();
clrscr();

begin:

textcolor(14);
cout<<"\n\n";
cprintf("rules:");
cout<<"\n\n\n";
textcolor(9);
cprintf("you have answer 10 questions");
cout<<"\n";
cprintf("each questions are compulsary.");
cout<<"\n";
cprintf("for every correct answer you will get +1.");cout<<"\n";
cprintf("for every wrong answers you will have to cost -1.");cout<<"\n";
cprintf("in few questions you have opportunity to get bonus.");cout<<"\n\n\n\n";
textcolor(754);
cprintf("                              if rules are clear to you");
cout<<"\n\n\n                                     click to start\n\n\n\n\n\n\n\n";
getch();
clrscr();

textcolor(9);
cout<<"\n\n\n\n\n\n\n\n\n\n";
cprintf("                            enter your name ");
cout<<"\n\n";
cout<<"                          ";
gets(name);
delay(1500);
clrscr();






for(int Q=0;Q<10;Q++)
   {
   int i,m;
   time_t t;
   char ans;

   srand((unsigned) time(&t));
   m=rand() % 31;
   if(m==0)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> which place is more safest than all");
   cout<<"\n";
   cprintf("a> place where snakes are kept");
   cout<<"\n";
   cprintf("b> place where oxes are tied");
   cout<<"\n";
   cprintf("c> a place where lion is kept hungry for 2 years");
   cout<<"\n";
   cprintf("d> a place where chemicals are kept");
   cout<<"\n";
   textcolor(14);
   cprintf("enter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='c')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
}
   delay(1050);
   clrscr();
   }

     if(m==1)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>how many 5 in all ?");
   cout<<"\n3 2 5 3 4 3 5\n";
   cprintf("a> 3");
   cout<<"\n";
   cprintf("b> 2");
   cout<<"\n";
   cprintf("c> 4");
   cout<<"\n";
   cprintf("d> 5");                 textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='c')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }

if(m==2)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> how many 5 below ?");
   cout<<"\n1 3 2 4 5 6 5\n";
   cprintf("a> 2");
   cout<<"\n";
   cprintf("b> 3");
   cout<<"\n";
   cprintf("c> 4");
   cout<<"\n";
   cprintf("d> 5");                 textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==3)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>who invented bulb");
   cout<<"\n";
   cprintf("a> ruther ford");
   cout<<"\n";
   cprintf("b> thomos edision");
   cout<<"\n";
   cprintf("c> bohar");
   cout<<"\n";
   cprintf("d> wright brothers");   textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==4)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>name the device used to measure earthquake");
   cout<<"\n";
   cprintf("a> barometer");
   cout<<"\n";
   cprintf("b> richter scale");
   cout<<"\n";
   cprintf("c> caloremeter ");
   cout<<"\n";
   cprintf("d> thermometer");       textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==5)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>what is atom made up of?");
   cout<<"\n";
   cprintf("a> electron");
   cout<<"\n";
   cprintf("b> proton");
   cout<<"\n";
   cprintf("c> neutron");
   cout<<"\n";
   cprintf("d> all");               textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==6)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>fundamental unit of proton is - ");
   cout<<"\n";
   cprintf("a> quarks");
   cout<<"\n";
   cprintf("b> charges");
   cout<<"\n";
   cprintf("c> energy");
   cout<<"\n";
   cprintf("d> both B&C");          textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='a')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==7)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>next smallest unit after electrons of matter is");
   cout<<"\n";
   cprintf("a> quarks");
   cout<<"\n";
   cprintf("b> charge");
   cout<<"\n";
   cprintf("c> neuclii");
   cout<<"\n";
   cprintf("d> none");              textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='a')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==8)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>what is air?");
   cout<<"\n";
   cprintf("a> a mixture");
   cout<<"\n";
   cprintf("b> fluid");
   cout<<"\n";
   cprintf("c> both above");
   cout<<"\n";
   cprintf("d> none of the above"); textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='c')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==9)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> what kind of circuit is used in keyboards to execute 'OR'statement");
   cout<<"\n";
   cprintf("a> parallel circuits");
   cout<<"\n";
   cprintf("b> series circuits");
   cout<<"\n";
   cprintf("c> straight");
   cout<<"\n";
   cprintf("d> none");      textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='a')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==10)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> what kind of circuit is used in keyboards to execute 'AND'statement");
   cout<<"\n";
   cprintf("a> parallel circuits");
   cout<<"\n";
   cprintf("b> series circuits");
   cout<<"\n";
   cprintf("c> straight");
   cout<<"\n";
   cprintf("d> none");      textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==11)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> what is actually alpha rays is");
   cout<<"\n";
   cprintf("a> positvely charged electrons");
   cout<<"\n";
   cprintf("b> negatively charged heliun ion");
   cout<<"\n";
   cprintf("c> positively charged helium ion");
   cout<<"\n";
   cprintf("d> negatively charged electrons");  textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==12)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> which one is more radio active in nature");
   cout<<"\n";
   cprintf("a> radium");
   cout<<"\n";
   cprintf("b> Uranium");
   cout<<"\n";
   cprintf("c> plutonium");
   cout<<"\n";
   cprintf("d> ununoctium");textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='a')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==13)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> Li is commonly used in - ");
   cout<<"\n";
   cprintf("a> batteries");
   cout<<"\n";
   cprintf("b> bulbs");
   cout<<"\n";
   cprintf("c> screen display");
   cout<<"\n";
   cprintf("d> paints"); textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='a')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==14)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> largest telescope - ");
   cout<<"\n";
   cprintf("a> kepler");
   cout<<"\n";
   cprintf("b> hubble");
   cout<<"\n";
   cprintf("c> SSLV - 5");
   cout<<"\n";
   cprintf("d> INSAT");  textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==15)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> distance between earth and pluto in AU");
   cout<<"\n";
   cprintf("a> 34");
   cout<<"\n";
   cprintf("b> 43");
   cout<<"\n";
   cprintf("c> 36");
   cout<<"\n";
   cprintf("d> 39");     textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==16)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> average time taken by radio waves to trvaell 39 AU(from earth to pluto) is.");
   cout<<"\n";
   cprintf("a> 4 days");
   cout<<"\n";
   cprintf("b> 6 hours");
   cout<<"\n";
   cprintf("c> 5 hours 22 min");
   cout<<"\n";
   cprintf("d> 4 days 5 hours 22 min");textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='c')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==17)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> THE current is flowing towards left, give the direction of flow of electrons");
   cout<<"\n";
   cprintf("a> in the direction of current");
   cout<<"\n";
   cprintf("b> opposit to the direction of current");
   cout<<"\n";
   cprintf("c> no role of electron");
   cout<<"\n";
   cprintf("d> perpendicular to  current"); textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==18)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> what is cosmic year ?");
   cout<<"\n";
   cprintf("a> time taken by moon to complete one revolution");
   cout<<"\n";
   cprintf("b> time taken by sun to complete one revolution");
   cout<<"\n";
   cprintf("c> time taken by earth to complete one revolution");
   cout<<"\n";
   cprintf("d> time taken by galaxy to complete one revolution");textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==19)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> what are red spots in jupiter?");
   cout<<"\n";
   cprintf("a> hotest region in the planet");
   cout<<"\n";
   cprintf("b> coldest region of the planet");
   cout<<"\n";
   cprintf("c> high speeded wind area");
   cout<<"\n";
   cprintf("d> colour of the soil");textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='c')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==20)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> why mars is red?");
   cout<<"\n";
   cprintf("a> presense of flameable gases");
   cout<<"\n";
   cprintf("b> presence of iron");
   cout<<"\n";
   cprintf("c> it is because of high tempreature");
   cout<<"\n";
   cprintf("d> all");textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==21)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> why pluto doesn't follow the eleptical path?");
   cout<<"\n";
   cprintf("a> long range of distance from sun");
   cout<<"\n";
   cprintf("b> because its not a planet");
   cout<<"\n";
   cprintf("c> because of small size");
   cout<<"\n";
   cprintf("d> because of long distance from sun and small size");textcolor(14);
   cprintf("\nenter your answer");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==22)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> what is 1 cal?");
   cout<<"\n";
   cprintf("a> 1 unit volume of ideal gas by 1 degree");
   cout<<"\n";
   cprintf("b> 1 mol of ideal gas by 1 degree");
   cout<<"\n";
   cprintf("c> 1Kg of water by 1 degree");
   cout<<"\n";
   cprintf("d> it actually amount of heat requried to raise the temp.of 1g water by 1 degree\n");
 textcolor(14);cout<<endl;  cprintf("enter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                     correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==23)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q>  THE ELEMENT WITH LOWEST MELTING AND BOILING POINT");
   cout<<"\n";
   cprintf("a> copper");
   cout<<"\n";
   cprintf("b> iron");
   cout<<"\n";
   cprintf("c> nickel");
   cout<<"\n";
   cprintf("d> zinc");                 textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==24)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> THE STUDY OF BIRD IS CALLED");
   cout<<"\n";
   cprintf("a> ZOOLOGY");
   cout<<"\n";
   cprintf("b> ASTROLOGY");
   cout<<"\n";
   cprintf("c> ORNTHOLOGY");
   cout<<"\n";
   cprintf("d> MICROLOGY");            textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='c')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==25)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> THE UNIT OF CAPACITANCE IS ");
   cout<<"\n";
   cprintf("a> NEWTON");
   cout<<"\n";
   cprintf("b> WATT");
   cout<<"\n";
   cprintf("c> OHM");
   cout<<"\n";
   cprintf("d> FARAD");                textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }

if(m==26)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> WHO IS THE FATHER OF COMPUTER");
   cout<<"\n";
   cprintf("a> CHARLES BABBAGE");
   cout<<"\n";
   cprintf("b> BLAISE PASCAL");
   cout<<"\n";
   cprintf("c> NEWTON");
   cout<<"\n";
   cprintf("d> FRENKLIN");             textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='a')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==27)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> HUMAN HEART IS DIVIDED INTO ");
   cout<<"\n";
   cprintf("a> ONE PART");
   cout<<"\n";
   cprintf("b> TWO PART");
   cout<<"\n";
   cprintf("c> THREE PART");
   cout<<"\n";
   cprintf("d> FOUR PART");            textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }

if(m==28)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> ATOM BOMB IS BASED ON THE PRINCIPAL OF");
   cout<<"\n";
   cprintf("a> NUCLEAR FISSION");
   cout<<"\n";
   cprintf("b> NUCLEAR FUSSION");
   cout<<"\n";
   cprintf("c> NEWTON'S THIRD LAW");
   cout<<"\n";
   cprintf("d> ELECTROLYSIS");         textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='a')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }

if(m==29)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> HYDROGEN BOMB IS BASED ON PRINCIPAL OF");
   cout<<"\n";
   cprintf("a> NUCLEAR FISSION");
   cout<<"\n";
   cprintf("b> NUCLEAR FUSSION");
   cout<<"\n";
   cprintf("c> NEWTON'S THIRD LAW");
   cout<<"\n";
   cprintf("d> ELECTOLYSIS OF WATER"); textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='b')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
if(m==30)
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n";
   textcolor(15);
   cprintf("Q> DISTANCE OF OZONE LAYER ");
   cout<<"\n";
   cprintf("a> 13 KM");
   cout<<"\n";
   cprintf("b> 14 KM");
   cout<<"\n";
   cprintf("c> 17 KM");
   cout<<"\n";
   cprintf("d> 16 KM");
    textcolor(14); textcolor(14);
   cprintf("\nenter your answer\n");
   cout<<"\n\n                                        ";
   cin>>ans;
   if(ans=='d')
   {
   cout<<"\n\n";
   textcolor(502);
   cprintf("                                    correct");
   score++;
   }
   else
   {
   cout<<"\n\n";
   textcolor(504);
   cprintf("                                  wrong answer");
   score--;
   }
   delay(1050);
   clrscr();
   }
   }
   delay(100);
 cout<< "\n\n\n\n\n\n";

       b=random(1)+9;
 for(a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+510;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }
   cout<<"\n\n\n\n";
   textcolor(13);
   cprintf("                         PROCESSING PLEASE WAIT FOR RESULT");
   cout<<"\n\n\n\n\n\n";

    b=random(1)+510;
 for(a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+9;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }
   sleep(3);



    clrscr();


    cout<< "\n\n\n\n\n\n";

     b=random(1)+9;
 for(a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+510;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }


   textcolor(12);
   cprintf(" master ");
   puts(name);
   cout<<"\n\n\n\n";
   textcolor(4);
   cprintf("                                     YOU SCORED");
   cout<<"\n                                               "<<score;
   cout<<"\n\n\n\n";

    b=random(1)+510;
 for(a=0;a<=79;a++)
   {
   textcolor(b);
   cprintf("*");
   }
   p=random(1)+9;
   for(a=0;a<=79;a++)
   {
   textcolor(p);
   cprintf("*");
   }
   delay(2002);
   clrscr();
   for(int x=0;x<79;x++)
   {
   textcolor(500);
   cprintf("~~");
   }
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cprintf("                         WANTED TO PLAY ONCE AGAIN");
   cout<<"\n";
   textcolor(14);
   cprintf("                              CLICK Y for yes");
   cout<<"\n";
   cout<<"\n                                    else\n";
   cout<<"\n";
   textcolor(13);
   cprintf("                              CLICK  N for no");
   cout<<"\n\n\n\n\n\n";

   for(x=0;x<=79;x++)
   {
   textcolor(500);
   cprintf("~~");
   }
   cout<<"                                     ";
   cin>>arc[3];
   if(arc[3]=='y')
   {
   goto begin;
   }
   if(arc[3]=='n')
   {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   textcolor(4);
   cprintf("                                 THANK YOU");
   cout<<"\n";
   textcolor(10);
   cprintf("                            for playing with us");
   }
   delay(1200);
   }
   if(e=='n')
   {
   textcolor(10);
   cprintf("                                   THANK YOU");
   cout<<"\n";
   textcolor(9);
   cprintf("                              for playing with us");
   delay(400);

}
clrscr();
cout<<"\n\n\n\n\n\n";
cout<<"                                      MADE BY\n\n\n";
textcolor(5);
cprintf("                             VEER\nABHIMANYU\nSINGH\nCSVA");
cout<<"\n\n\n\n                                        CLASS";
cout<<"\n                                    XII - SCIENCE";
delay(4500);
goto csva;
}
}
if(aman==3)
{
 {    abhimanyu:
    _setcursortype(_NOCURSOR);
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(int a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
 cprintf("WORD SEARCH");
 gotoxy(12,10);
 cprintf("SEARCH BY WORD");
 gotoxy(12,12);
 cprintf("NEW ENTRIES");
  gotoxy(12,14);
 cprintf("DELETE ENTRIES");
 textbackground(0);
  gotoxy(12,16);
 cprintf("              ");
  gotoxy(39,16);
  textbackground(5);
 cprintf("EXIT IN a ONE CLICK");
       int q;
 gotoxy(18,16);
 cin>>q;

		  //EXIT

 if(q>=5)
 {    clrscr();
  goto csva;
 }
			//SEARCH

if(q==1)
{     amn:
clrscr();
dict m;
fstream work;
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(int a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
work.open("proZect.txt",ios::in|ios::binary);
char words[56];
cout<<"ENTER WORD - ";
cin>>words;
while(work)
{
work.read((char*)&m,sizeof(m));
if (strcmp(words,m.word)==0  )
{    clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);
 for(int a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(512);
 gotoxy(5,8);
puts(m.detail);
getche();
work.close();
goto aman;
}
}
 gotoxy(34,14);
 textcolor(496);
cprintf("SORRY! THERE IS NO SUCH A WORD ");
delay(1000);

goto abhimanyu;
aman:
clrscr();
gotoxy(12,15);
textbackground(0);
textcolor(14);
clrscr();
char qwerty;
 textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
cprintf("wana search more -  ");
cin>>qwerty;
if(qwerty=='y'||qwerty=='Y')
{
goto amn;
}
else
goto abhimanyu;


}
	     //ENTRY

 if(q==3)
 {  clrscr();
textbackground(1);

textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(int a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
textcolor(14);
dict m;
fstream work;
work.open("proZect.txt",ios::out|ios::binary|ios::ate);
char de;
do
{
gotoxy(12,12);
cout<<"WORD  - ";
gets(m.word);
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(int a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }     gotoxy(12,12);

cout<<"\n             enter meaning - " ;
gotoxy(6,13);
cout<<(char)177;
gotoxy(32,13);
gets(m.detail);
work.write((char*)&m,sizeof(m));
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
gotoxy(12,12);
cout<<"wnts to enter more - ";
cin>>de;
}
while(de=='y') ;
work.close();
clrscr();
goto abhimanyu;
}
//delete
			 if(q==4)
{
 {
_setcursortype(_NOCURSOR);
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

   for(int a=6,c=74;a<=41;a++,c--)
     { gotoxy(a,6);
       cout<<(char)177;
       gotoxy(c,6);
       cout<<(char)177;
       delay(12);
     }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(9);
 textbackground(1);
 gotoxy(12,9);
 cprintf(" DELETE AND BACK ");

 gotoxy(12,12);
 cprintf(" MULTIPLE DELETE ");
 gotoxy(12,16);
 textbackground(4);
 textcolor(14);
 cprintf("EXIT");
 gotoxy(43,16);
 cprintf("DUAL EXIT");
 gotoxy(43,13);
 textbackground(0);
 cprintf("         " );
 gotoxy(47,13);
 int choice;
 cin>>choice;

  if(choice==3)
 {
 goto csva;
 }
 if(choice==4)
 {
 goto zx;
 }
 if(choice==1)
 {
 dict m;
 char ne[50];
 fstream work,ask;
 work.open("proZect.txt",ios::out|ios::in|ios::binary);
 ask.open ("temp.txt",ios::in|ios::out|ios::binary);
 clrscr();
 _setcursortype(_NOCURSOR);
 clrscr();
 textcolor(12);
 textbackground(5);
 clrscr();
 gotoxy(3,5);

 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
 gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }


 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
 gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
 gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
cout<<"ENTER THE WORD TO BE DELETED - ";
gets(ne);
qwe:
while(work)
{
     work.read((char*)&m,sizeof m);
  if(strcmp(m.word,ne)==0)
  {
  goto qwe;
  }
  else
  ask.write((char*)&m,sizeof m);
 }
 work.close();
 ask.close();
 remove("project.txt");
 rename("temp.txt","project.txt");
 clrscr();
   _setcursortype(_NOCURSOR);
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
 cprintf("DELETED IT!") ;
 delay(999);
goto abhimanyu;

 }




  if(choice==2)
 { at:
 dict m;
 char ne[50];
 fstream work,ask;
 work.open("proZect.txt",ios::out|ios::in|ios::binary);
 ask.open ("temp.txt",ios::in|ios::out|ios::binary);
 clrscr();
 _setcursortype(_NOCURSOR);
 clrscr();
 textcolor(12);
 textbackground(5);
 clrscr();
 gotoxy(3,5);

 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
 gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }


 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
 gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
 gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
cout<<"ENTER THE WORD TO BE DELETED - ";
gets(ne);
qwee:
while(work)
{
     work.read((char*)&m,sizeof m);
  if(strcmp(m.word,ne)==0)
  {
  goto qwee;
  }
  else
  ask.write((char*)&m,sizeof m);
 }
 work.close();
 ask.close();
 remove("project.txt");
 rename("temp.txt","project.txt");
 clrscr();
   _setcursortype(_NOCURSOR);
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
 cprintf("DELETED IT!") ;
 delay(999);


  clrscr();
 _setcursortype(_NOCURSOR);
clrscr();
textcolor(12);
textbackground(5);
clrscr();
gotoxy(3,5);

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
       gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
  gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }

  for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
       gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(10);
 gotoxy(12,8);
  cprintf(" DO! YOU WANa DELETE MORE! ");
  char qw;
  cin>>qw;
     if(qw=='y')
     {
     goto at;
     }
       if(qw=='n')
       {
       goto abhimanyu;}}}}}

       }


   if(aman==2)
   {
   {         pla:

clrscr();
_setcursortype(_NOCURSOR);
textcolor(11);
textbackground(1);
clrscr();
    for(int a=1;a<42;a++)
    {
     gotoxy(a,4);
     cout<<"_";
     gotoxy((80-(a-1)),4);
     cout<<"_";
     gotoxy(a,21);
     cout<<"_";
     gotoxy((80-(a-1)),21);
     cout<<"_";
     delay(8);
    }
   gotoxy(16,10);
   textcolor(10);
   cprintf("             NEW REMINDER  ");
   cout<<"\n\n";
   delay(225);
   textcolor(12);
   cprintf("                            DELETE REMINDERS");
   delay(225);
   textcolor(9);
   cout<<"\n\n";
   cprintf("                            RECORD DISPLAY");
   textcolor(5);
   delay(45);
   cout<<"\n\n";
   cprintf("                            EXIT ");

      for(a=49;a<=76;a++)
      {
      for(int b=5;b<22;b++)
      { textbackground(0);

      gotoxy(a,b);
      cprintf("    ");
      delay(1);
       }}   int as;
       gotoxy(54,14);
       textcolor(9);
       cprintf("ENTER YOUR CHOISE  - ");
       cin>>  as;



	 if(as==1) //NEW REMINDER
   {



      clrscr();
      _setcursortype(_NOCURSOR);
      textcolor(14);
      textbackground(13);
      clrscr();
	      for(int a=1;a<42;a++)
		 {
		  gotoxy(a,4);
		  cout<<"_";
		  gotoxy((80-(a-1)),4);
		  cout<<"_";
		  gotoxy(a,21);
		  cout<<"_";
		  gotoxy((80-(a-1)),21);
		  cout<<"_";
		 delay(8);
		 }


		 gotoxy(1,5);


	     for(a=0;a<=1279;a++)
		 { textbackground(0);
		   cprintf(" ");
				 }
		   gotoxy(7,7);



   struct date d;
   struct  time t;
   int day,year,min,hour,month;
   fstream abhi;
   remind  me,ce;


abhi.open("reminder.txt",ios::in|ios::out|ios::binary);


cprintf("enter the title of your reminder - ");
cout<<"\n\n\n                   ";
gets(me.title);

clrscr();
_setcursortype(_NOCURSOR);
textcolor(14);
textbackground(13);
clrscr();
   for(a=1;a<42;a++)
   {
   gotoxy(a,4);
   cout<<"_";
   gotoxy((80-(a-1)),4);
   cout<<"_";
   gotoxy(a,21);
   cout<<"_";
   gotoxy((80-(a-1)),21);
   cout<<"_";
   delay(8);
   }      gotoxy(1,5);      for(a=0;a<=1279;a++)
   { textbackground(0);
   cprintf(" ");
   }
 gotoxy(7,7);
 cprintf(" TYPE MESSAGE - \n");
 gets(me.data);
 clrscr();
 textcolor(11);
 textbackground(1);
 clrscr();
 gotoxy(3,5);
 int c;
 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
 gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
 gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }
 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
 gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);

 cout<<"YEAR        -  ";
 cin>>me.year;
 gotoxy(12,9);
 cout<<"MONTH       -  ";
 cin>>me.mon;
 gotoxy(12,10);
 cout<<"DAY         -  ";
 cin>>me.date;
 gotoxy(21,13);
 cout<<"hour        -  ";
 cin>>me.hour;
 gotoxy(21,14);
 cout<<"minute      -  ";
 cin>>me.min;
 abhi.write((char*)&me, sizeof(me));
 textbackground(0);
 textcolor(11	);
 clrscr();
 gotoxy(34,12);
 textbackground(1);
 cprintf(" << SAVED >> ");
 abhi.close();
 delay(350);
 goto pla;
 }
      if(as==3)   //SEE ALARMS
      {   {
      clrscr();
      _setcursortype(_NOCURSOR);
      textcolor(14);
      textbackground(13);
      clrscr();
		   gotoxy(7,7);
   struct date d;
   struct  time t;
   int day,year,min,hour,month;
   fstream abhi;
 remind  me,ce;
 int c=0;
 abhi.open("reminder.txt",ios::in|ios::out|ios::binary);
 while(abhi.read((char*)&me,sizeof(me)) )
 {         c++;
 gotoxy(12,7);
 cprintf("FILE NO:- ");
 cout<<c;
 delay(130);
 clrscr();
 _setcursortype(_NOCURSOR);
 textcolor(14);
 textbackground(13);
 clrscr();
 textcolor(11);
 textbackground(1);
 clrscr();
 gotoxy(3,5);
 for(int a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,6);
 cout<<(char)177;
 gotoxy(c,6);
 cout<<(char)177;
 delay(12);
 }
 for(a=3;a<16;a++)
 { gotoxy(6,a+4);
 cout<<(char) 177;
 gotoxy(74,a+4);
 cout<<(char) 177;
 delay(35);
 }
 for(a=6,c=74;a<=41;a++,c--)
 { gotoxy(a,19);
 cout<<(char)177;
 gotoxy(c,19);
 cout<<(char)177;
 delay(12);
 }
 textcolor(1);
 gotoxy(12,8);
 cout<<"YEAR        -  ";
 cout<<me.year;
 gotoxy(12,9);
 cout<<"MONTH       -  ";
 cout<<me.mon;
 gotoxy(12,10);
 cout<<"DAY         -  ";
 cout<<me.date;
 gotoxy(21,13);
 cout<<"hour        -  ";
 cout<<me.hour;
 gotoxy(21,14);
 cout<<"minute      -  ";
 cout<<me.min;
 delay(450);
 clrscr();
 textcolor(11);
 textbackground(5);
 clrscr();
 gotoxy(35,1);
 puts(me.title);
 gotoxy(3,5);
 puts(me.data);
  getch();
 }
 abhi.close();
 goto pla;
 }}
 if(as==2)
 {      {
      textcolor(0);
      textbackground(0);
      clrscr();
      char asd;
      gotoxy(13,12);
      textcolor(12);
      textbackground(1);
      cprintf(" SYSTEM WILL CLEAR ALL REMINDER ALARMs, CLICK 'Y'");
      gotoxy(18,19);
      cin>>asd;
      if(asd=='y')
      remove("reminder.txt");
      else
      goto pla;
		 }
}
if(as==4)
{
goto csva;
}
}
}
}