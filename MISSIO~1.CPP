
#include<stdio.h>
#include <graphics.h>
#include<dos.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<String.h>
#include<process.h>
//#include<conio.h>

void bress(float,float,float,float);
void man(int,int);
void man1(int,int);
void cirgrnd(int);
void rocket(int);
void rocket1(int);
void rocket2(int);
void bubb(int);
void first();
void intro();
void spacecraft();
void password();
void jump(int,int);
void para(int,int);
void jump2(int,int);
void para2(int,int);
void cirgrnd2();

int main()
{
   
   //delay(5000);
   
   int gd,gm;
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm,"..\\BGI");
//   cout<<"\a"<<endl;
   

   
  //  initwindow(600,600); //open a 400x300 graphics window
    //delay(1000);
 

    first();
    delay(500);
    intro();
    delay(500);
    cleardevice();
    int i,y=10,x=5,u=20;
    setcolor(BLACK); //background color set to black
    cleardevice();
    cirgrnd(0);
    rocket(0);

	//delay(1000);
	man(0,0);
	cleardevice();
	cirgrnd(0);
	rocket(0);
	man1(0,0);

    wait:while(!kbhit());
    int c=getch();
    if(c=='w'||c=='W')
    {
    for(i=0;i<120;i++)
    {
    cleardevice();
    cirgrnd(0);
    rocket(0);
	//delay(1000);
	man(i,0);
	delay(200);
	i=i+2;
	cleardevice();
	cirgrnd(0);
	rocket(0);
	man1(i,0);
	delay(200);
    }
    delay(1000);
    cleardevice();
    closegraph();
    password();
    spacecraft();
    }
    else if(c=='r'||c=='R')
    {
    for(i=0;i<120;i++)
    {
    cleardevice();
    cirgrnd(0);
    rocket(0);
	//delay(1000);
	man(i,0);
	delay(100);
	i=i+2;
	cleardevice();
	cirgrnd(0);
    rocket(0);
      man1(i,0);
	delay(100);
    }
    delay(1000);
    cleardevice();
    closegraph();
    password();
//    spacecraft();
    }
    else
    goto wait;


	//delay(1000);
	for(i=0;i<20;i++)
	{
	y+=10;
	x+=5;
	u+=8;
	//bar(left,top,right,bottom)
	setfillstyle(SOLID_FILL,BLUE); //(for rocket
	setcolor(BLUE); //for rocket
	//to draw the rocket...
	rocket(y);
	rocket1(y);
	bubb(y-10);
	cirgrnd(i*5);
   //	man1(199,-10-y);
	jump(u,y);
	//para(u,y);
	delay(100); //delay to see the rocket moving slowly
	cleardevice(); //screen blank and start from 0
    }
	setcolor(RED);
      // circle(300,y-100,40);
       //setfillstyle(SOLID_FILL,RED);
     //	floodfill(340,y-100,RED);
      //delay(200);
	setcolor(RED);
	 circle(260,y-100,40);
      setfillstyle(SOLID_FILL,RED);

	floodfill(260,y-100,RED);
	delay(400);
	circle(260,y-50,50);
       setfillstyle(SOLID_FILL,RED);

	floodfill(260,y-50,RED);
	delay(400);
	circle(360,y-50,20);
       setfillstyle(SOLID_FILL,RED);

	floodfill(360,y-50,RED);
	delay(400);
	circle(460,y-40,20);
       setfillstyle(SOLID_FILL,RED);

	floodfill(460,y-40,RED);
	circle(100,y-20,30);
      setfillstyle(SOLID_FILL,RED);

	floodfill(100,y-40,RED);
       /*	circle(360,y-60,20);
	setfillstyle(SOLID_FILL,RED);
	floodfill(160,y-60,RED);*/

	//floodfill(300,y-200,RED);

	delay(300);
//	cleardevice();
	delay(1000);
	int uu=0,yy=0;
	for(i=0;i<365;i++)
	{
		delay(40);
		cleardevice();
		jump2(uu,yy);
		uu+=1;
		yy+=1;
	}
	delay(400);
	for(i=0;i<250;i++)
	{
		cleardevice();
		cirgrnd2();
		man1(i,0);
		i=i+2;
		delay(70);
		cleardevice();
		cirgrnd2();
		man(i,0);
		delay(70);
	}

	settextstyle(3,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(150,200,"Jaan Bachi Toh Lakho Paaye !!"); //(int x,int y,textstring)
	delay(2450);
	cleardevice();
	settextstyle(4,HORIZ_DIR,3);
	setcolor(8);
	outtextxy(100,200,"Project developed by");
	outtextxy(100,250,"Chirag Soni");
	outtextxy(100,300,"T23-149");
	delay(2900);
    getch();
    closegraph();
	   //close graphics window
	return 0;
}
void cirgrnd(int i)
{
    setcolor(LIGHTGRAY);//sets the circle color to yellow
    circle(150,100,25+i); //draw circle with parameters--center(x,y) and radius
    setfillstyle(SOLID_FILL,LIGHTGRAY); //fill the circle with solid yellow color
    setcolor(LIGHTGRAY);
    floodfill(150,100,LIGHTGRAY); //circle filling the color with yellow
	setcolor(GREEN); //setting the ground color green
	setfillstyle(SOLID_FILL,GREEN); //fill the ground color with green
	bar(0,425+i,600,480);
   // int x[]={0,425,0,480,600,480,600,425,110+i,425,110+i,430,93+i,430,93+i,425};
   // fillpoly(8,x);

}
void cirgrnd2()
{
//    setcolor(YELLOW);//sets the circle color to yellow
//    circle(150,100,25+i); //draw circle with parameters--center(x,y) and radius
//    setfillstyle(SOLID_FILL,YELLOW); //fill the circle with solid yellow color
//    setcolor(YELLOW);
//    floodfill(150,100,YELLOW); //circle filling the color with yellow
	setcolor(GREEN); //setting the ground color green
	setfillstyle(SOLID_FILL,GREEN); //fill the ground color with green
	bar(0,425,600,480);
   // int x[]={0,425,0,480,600,480,600,425,110+i,425,110+i,430,93+i,430,93+i,425};
   // fillpoly(8,x);

}

void rocket(int y)
{
	setfillstyle(SOLID_FILL,BLUE); //(for rocket
	setcolor(BLUE); //for rocket
	//to draw the rocket...
	line(300,300-y,325,325-y);
	line(325,325-y,325,425-y);
	line(325,425-y,350,450-y);
	line(350,450-y,250,450-y);
	line(250,450-y,275,425-y);
	line(275,425-y,275,325-y);
	line(275,325-y,300,300-y);
	floodfill(300,400-y,BLUE);
       //	setcolor(RED);
       //	settextstyle(8,0,4); //(font,direction-horizontal is 0 n rotates anticlockwise thereafter,charsize)
      //outtextxy(300,325-y,"ISRO");
	//indian flag starts
	setfillstyle(SOLID_FILL,RED);
	setcolor(RED);
	int poly1[8];
	poly1[0]=290;
	poly1[1]=326-y;
	poly1[2]=290;
	poly1[3]=336-y;
	poly1[4]=298;
	poly1[5]=336-y;
	poly1[6]=298;
	poly1[7]=326-y;
	fillpoly(4,poly1);
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(WHITE);
	int poly12[8];
	poly12[0]=298;
	poly12[1]=326-y;
	poly12[2]=298;
	poly12[3]=336-y;
	poly12[4]=306;
	poly12[5]=336-y;
	poly12[6]=306;
	poly12[7]=326-y;
	fillpoly(4,poly12);
	setfillstyle(SOLID_FILL,GREEN);
	setcolor(GREEN);
	int poly13[8];
	poly13[0]=306;
	poly13[1]=326-y;
	poly13[2]=306;
	poly13[3]=336-y;
	poly13[4]=314;
	poly13[5]=336-y;
	poly13[6]=314;
	poly13[7]=326-y;
	fillpoly(4,poly13);
    /*	setfillstyle(SOLID_FILL,LIGHTRED);
	setcolor(LIGHTRED);
	line(285,326-y,315,326-y);
	line(315,326-y,315,332-y);
	line(315,332-y,285,332-y);
	line(285,332-y,285,326-y);
	floodfill(300,329-y,LIGHTRED);
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(WHITE);
	line(285,332-y,315,332-y);
	line(315,332-y,315,338-y);
	line(315,338-y,285,338-y);
	line(285,338-y,285,332-y);
	floodfill(300,335-y,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	setcolor(GREEN);
	line(285,338-y,315,338-y);
	line(315,338-y,315,344-y);
	line(315,344-y,285,344-y);
	line(285,344-y,285,338-y);
	floodfill(300,341-y,GREEN);
	setfillstyle(SOLID_FILL,BLUE);
	setcolor(BLUE);
	circle(300,335-y,3);
	line(300,332-y,300,338-y);
	line(297,335-y,303,335-y);
	line(298,331-y,302,337-y);
	line(302,331-y,298,337-y);
    */
}


void rocket1(int y)
{
     setfillstyle(SOLID_FILL,RED);
	 setcolor(RED);
	 int poly[6];
	 poly[0]=280;
	 poly[1]=450-y;
	 poly[2]=300;
	 poly[3]=480-y;
	 poly[4]=320;
	 poly[5]=450-y;
	 fillpoly(3,poly);
    /* setfillstyle(SOLID_FILL,RED);
	 setcolor(RED);
     line(280,550-y,300,580-y);
     line(300,580-y,320,550-y);
     floodfill(300,565-y,RED);
     */
}
/*void rocket2(int y)
{
	 setfillstyle(SOLID_FILL,RED);
	 setcolor(RED);
	 int poly[6];
	 poly[0]=290;
	 poly[1]=450-y;
	 poly[2]=300;
	 poly[3]=480-y;
	 poly[4]=310;
	 poly[5]=450-y;
	 fillpoly(3,poly);
    setfillstyle(SOLID_FILL,RED);
	 setcolor(RED);
     line(280,550-y,300,580-y);
     line(300,580-y,320,550-y);
     floodfill(300,565-y,RED);
}     */
void bubb(int y)
{
     setfillstyle(SOLID_FILL,DARKGRAY);
     setcolor(DARKGRAY);
     circle(260,360+y,5);
     circle(270,360+y,5);
     circle(280,360+y,5);
     circle(290,360+y,5);
     circle(320,360+y,5);
     circle(330,360+y,5);
     floodfill(260,360+y,DARKGRAY);
     floodfill(270,360+y,DARKGRAY);
     floodfill(280,360+y,DARKGRAY);
     floodfill(290,360+y,DARKGRAY);
     floodfill(320,360+y,DARKGRAY);
     floodfill(330,360+y,DARKGRAY);
}
void man(int i,int y)
{
	  setcolor(RED);
	  circle(100+i,390,10);
	  //setfillstyle(SOLID_FILL,RED); //fill the circle with solid yellow color
	  //floodfill(100+i,500,RED);
	  circle(104+i,386+y,2);
	  arc(110+i,365+y,250,265,31);
	  setcolor(RED);
	  line(100+i,400+y,100+i,405+y);//neck
	/*  line(93+i,405+y,110+i,405+y);//shoulder line
	  line(93+i,405+y,93+i,430+y);
	  line(110+i,405+y,110+i,430+y);
	  line(93+i,430+y,110+i,430+y);//end of stomach*/
	  setfillstyle(SOLID_FILL,YELLOW);
	  int p[]={93+i,405+y,93+i,430+y,110+i,430+y,110+i,405+y};
	  fillpoly(4,p);
//	  setcolor(LIGHTGRAY);
 //	  floodfill(100+i,417+y,RED);
//	  setcolor(RED);
	  line(93+i,405+y,101+i,421+y);//inner hand
	  line(97+i,405+y,105+i,417+y);//outer hand
	  line(101+i,417+y,105+i,417+y);//joining hands
	  //1st leg
	  setfillstyle(SOLID_FILL,BROWN);
	  setcolor(BROWN);
      //    line(100+i,430+y,95+i,445+y);//inner part of leg
	//  line(105+i,430+y,102+i,440+y);//outer part of leg
	  int we[]={100+i,430+y,95+i,445+y,102+i,440+y,105+i,430+y};
	  fillpoly(4,we);
	  int g[]={105+i,430+y,110+i,445+y,113+i,440+y,110+i,430+y};
	  fillpoly(4,g);
	  setfillstyle(SOLID_FILL,BLACK);
//	  setcolor(BLACK);
    /*	  line(102+i,440+y,98+i,440+y);//shoe begins
	  line(102+i,440+y,107+i,440+y);//leg extension to the right
	  line(107+i,440+y,107+i,445+y);//leg brought down
	  line(107+i,445+y,95+i,445+y);//leg brought back*/
	  int t[]={104+i,440+y,95+i,440+y,95+i,445+y,104+i,445+y};
	  fillpoly(4,t);
	 // line(90+i,445+y,90+i,430+y);//leg complete
	  //2nd leg begins
 //	  line(105+i,430+y,110+i,445+y);//inner part of leg
 //	  line(110+i,430+y,113+i,440+y);//outer part of leg
	 /* line(113+i,440+y,108+i,440+y);//shoe
	  line(113+i,440+y,118+i,440+y);//leg extension to right
	  line(118+i,440+y,118+i,445+y);//leg down
	  line(118+i,445+y,115+i,445+y);//leg brought back
	  line(115+i,445+y,105+i,445+y);//leg back joined up*/
	  int r[]={117+i,440+y,108+i,440+y,108+i,445+y,117+i,445+y};
	  fillpoly(4,r);
	  /*line(100+i,430+y,100+i,445+y);//outer part of 2nd leg
	  line(90+i,430+y,90+i,445+y);//inner part of 2nd leg
	  line(100+i,445+y,105+i,445+y);
	  line(105+i,445+y,105+i,450+y);
	  line(105+i,450+y,90+i,450+y);
	  line(90+i,450+y,90+i,445+y);*/
       //	  delay(100);
	 //
	  //setfillstyle(SOLID_FILL,RED); //fill the circle with solid yellow color
	  //floodfill(100+i,500,RED);

}
void man1(int i,int y)
{
	  setcolor(RED);
	  circle(100+i,390+y,10);
	  circle(104+i,386+y,2);
	  arc(110+i,365+y,250,265,31);
	  line(100+i,400+y,100+i,405+y);//neck
	/*  line(93+i,405+y,110+i,405+y);//shoulder line
	  line(93+i,405+y,93+i,430+y);
	  line(110+i,405+y,110+i,430+y);
	  line(93+i,430+y,110+i,430+y);//end of stomach*/
	  setfillstyle(SOLID_FILL,YELLOW);
	  int p[]={93+i,405+y,93+i,430+y,110+i,430+y,110+i,405+y};
	  fillpoly(4,p);
   //	  setcolor(LIGHTGRAY);
   //	  floodfill(100+i,417+y,RED);
   //	  setcolor(RED);
	  line(93+i,405+y,95+i,420+y);
	  line(95+i,405+y,99+i,417+y);
	  line(95+i,420+y,99+i,417+y);
	  /*line(100+i,410+y,100+i,415+y);//neck
	  line(90+i,415+y,110+i,415+y);//shoulder line
	  line(90+i,415+y,90+i,430+y);
	  line(110+i,415+y,110+i,430+y);
	  line(90+i,430+y,110+i,430+y);//end of stomach  */
	  //to draw the leg in a straight line
	  setfillstyle(SOLID_FILL,BROWN);
	  setcolor(BROWN);
	  int h[]={97+i,430+y,97+i,445+y,101+i,445+y,101+i,430+y};
	  fillpoly(4,h);
//	  line(97+i,430+y,97+i,445+y);//inner part of leg
//	  line(101+i,430+y,101+i,445+y);//outer part of leg
    /*	  line(101+i,445+y,97+i,445+y);//shoe
	  line(101+i,445+y,106+i,445+y);//leg extension to right
	  line(106+i,445+y,106+i,450+y);//leg down
	  line(106+i,450+y,97+i,450+y);//leg brought back
	  line(97+i,450+y,97+i,445+y);//leg back joined up*/
	  setfillstyle(SOLID_FILL,BLACK);
	  int ar[]={97+i,450+y,106+i,450+y,106+i,445+y,97+i,445+y};
	  fillpoly(4,ar);
	  //line(100+i,410+y,100+i,450+y);
	  //line(80+i,420+y,120+i,420+y);
     //	  delay(100);
}
void man2(int i,int y)
{
	  setcolor(RED);
	  circle(15+i,25+y,10);
	  circle(17+i,23+y,2);
       //  arc(110+i,365+y,250,265,31);
	  line(15+i,35+y,15+i,40+y);//neck
	/*  line(93+i,405+y,110+i,405+y);//shoulder line
	  line(93+i,405+y,93+i,430+y);
	  line(110+i,405+y,110+i,430+y);
	  line(93+i,430+y,110+i,430+y);//end of stomach*/
	  setfillstyle(SOLID_FILL,YELLOW);
	  int p[]={8+i,40+y,8+i,65+y,26+i,65+y,26+i,40+y};
	  fillpoly(4,p);
   //	  setcolor(LIGHTGRAY);
   //	  floodfill(100+i,417+y,RED);
   //	  setcolor(RED);
	  line(9+i,40+y,11+i,50+y);
	  line(11+i,40+y,15+i,47+y);
	  line(11+i,50+y,15+i,47+y);
	  /*line(100+i,410+y,100+i,415+y);//neck
	  line(90+i,415+y,110+i,415+y);//shoulder line
	  line(90+i,415+y,90+i,430+y);
	  line(110+i,415+y,110+i,430+y);
	  line(90+i,430+y,110+i,430+y);//end of stomach  */
	  //to draw the leg in a straight line
	  setfillstyle(SOLID_FILL,BROWN);
	  setcolor(BROWN);
	  int h[]={12+i,65+y,12+i,80+y,18+i,80+y,18+i,65+y};
	  fillpoly(4,h);
//	  line(97+i,430+y,97+i,445+y);//inner part of leg
//	  line(101+i,430+y,101+i,445+y);//outer part of leg
    /*	  line(101+i,445+y,97+i,445+y);//shoe
	  line(101+i,445+y,106+i,445+y);//leg extension to right
	  line(106+i,445+y,106+i,450+y);//leg down
	  line(106+i,450+y,97+i,450+y);//leg brought back
	  line(97+i,450+y,97+i,445+y);//leg back joined up*/
	  setfillstyle(SOLID_FILL,BLACK);
	  int ar[]={12+i,80+y,12+i,85+y,21+i,85+y,21+i,80+y};
	  fillpoly(4,ar);
	  //line(100+i,410+y,100+i,450+y);
	  //line(80+i,420+y,120+i,420+y);
     //	  delay(100);
}

void first()
{
	int i;
	setcolor(BLACK);
	settextstyle(4, HORIZ_DIR,5);
	setcolor(WHITE);
	outtextxy(275,200,"Loading....");
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	setcolor(LIGHTGRAY);
//	rectangle(130,150,450,160);
	bress(130,150,450,150);
	bress(450,150,450,160);
	bress(450,160,130,160);
	bress(130,160,130,150);
	setfillstyle(SOLID_FILL,BLUE);
	  setcolor(BLUE);
	  for(i=0;i<=240;i+=10)
	  {
		int uu[]={132+i,152,137+i,152,137+i,158,132+i,158};
	    //	bar(80+i,150,140+i,160);
		fillpoly(4,uu);
		delay(250-i);
	  }


      //  setfillstyle(SOLID_FILL,LIGHTGRAY);
	  setcolor(LIGHTGRAY);
	  /*int poly[8];
	  poly[0]=280;
	  poly[1]=200;
	  poly[2]=420;
	  poly[3]=200;
	  poly[4]=420;
	  poly[5]=210;
	  poly[6]=280;
	  poly[7]=210;
	  fillpoly(8,poly);
	   */
	   cleardevice();

}
void intro()
{
	setcolor(BLACK);
	settextstyle(3, HORIZ_DIR,5);
	setcolor(GREEN);
	outtextxy(100,100,"Instructions!!!"); //(int x,int y,textstring)
	outtextxy(100,200,"Press 'w' for walk");
	outtextxy(100,300,"Press 'r' to run");
	delay(1500);
}
void password()
{
	int j=10,n=0;
char str[]="ENTER PASSWORD TO ACCESS AUTHORITY ";
clrscr();
while(n<strlen(str))
{
textcolor(14);
gotoxy(j,12);
printf("%c",str[n]);
j=j+2;
n++;
delay(90);
}
	char c[4];
	textcolor(4);
	//gotoxy(200,100);
	//cout<<"Enter password to access spacecraft"<<endl;
	//gotoxy(200,110);
	c[0]=getch();
	gotoxy(30,15);
	cout<<"*   ";
	c[1]=getch();
	cout<<"*   ";
	c[2]=getch();
	cout<<"*   ";
	c[3]=getch();
	cout<<"*   ";
	delay(500);
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	if((c[0]=='s') && (c[1]=='o') && (c[2]=='n') && (c[3]=='i'))
	{
		spacecraft();
	}
	else
	{
		outtextxy(300,380,"Invalid Password");
		outtextxy(300,400,"Access Denied");
		delay(1500);
		exit(0);
	}
}
void spacecraft()
{
	  int i;
	  setcolor(BLACK);
	  setfillstyle(SOLID_FILL,LIGHTGRAY);
	  setcolor(LIGHTGRAY);
	  rectangle(130,150,450,160);
	  settextstyle(4,HORIZ_DIR,5);
	  setcolor(WHITE);
	  outtextxy(100,200,"   Access Granted...");
	  setfillstyle(SOLID_FILL,BLUE);
	  setcolor(BLUE);
	  for(i=0;i<=310;i+=10)
	  {
		int uu[]={132+i,152,137+i,152,137+i,158,132+i,158};
	    //	bar(80+i,150,140+i,160);
		fillpoly(4,uu);
		delay(400-(i+5));
	  }
	  cleardevice();

	/*  for(int i=10;i>0;i++)
	  {
		i+=10;
		outtextxy(30+i,200,c);
	  }
	  */

}
void jump(int x,int m)
{
	man1(175+x,-140+m);
	para(175+x,-140+m);
}
void para(int w,int q)
{
	setcolor(BROWN);
	line(94+w,405+q,70+w,320+q);
	line(106+w,405+q,126+w,320+q);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	sector(98+w,320+q,0,180,28,28);
	//arc(98+w,320+q,0,180,28);
   //	floodfill(98+w,318+q,LIGHTGRAY);
	line(70+w,320+q,126+w,320+q);
//	setfillstyle(SOLID_FILL,YELLOW);
  //	setcolor(YELLOW);
  //	floodfill(103+w,350+q,YELLOW);
}
void jump2(int x,int m)
{
	cirgrnd2();
	man2(x,m);
	para2(x,m);
}
void para2(int w,int q)
{
	setcolor(BROWN);
	line(10+w,40+q,1+w,3+q);
	line(20+w,40+q,34+w,3+q);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	sector(20+w,3+q,0,180,19,19);
	//arc(98+w,320+q,0,180,28);
   //	floodfill(98+w,318+q,LIGHTGRAY);
	line(1+w,3+q,39+w,3+q);
//	setfillstyle(SOLID_FILL,YELLOW);
  //	setcolor(YELLOW);
  //	floodfill(103+w,350+q,YELLOW);
}


void bress(float x1,float y1,float x2,float y2)
{
	int x,y,end,inc=0,p,dx=abs(x2-x1),dy=abs(y2-y1),c=0,current=0;
	if(dx>dy)
	{
		p=2*dy-dx;
		if(x1<x2)
		{
			x=x1;y=y1;end=x2;
			if(y1<y2)inc=1;
			if(y1>y2)inc=-1;
		}
		else
		{
			x=x2;y=y2;end=x1;
			if(y2<y1)inc=1;
			if(y2>y1)inc=-1;
		}
		while(x<=end)
		{
			putpixel(x,y,15);

			if(p<0) p=p+2*dy;
			else
			{
				y=y+inc;p=p+2*(dy-dx);
			}
			x++;
			if(current==0&&c==10)
			{
				current=1;c=-1;
			}
			if(current==1&&c==6)
			{
				current=0;c=-1;
			}
			c++;
		}
	}
	else
	{
		p=2*dx-dy;
		if(y1<y2)
		{
			y=y1;x=x1;end=y2;
			if(x1<x2)inc=1;
			if(x1>x2)inc=-1;
		}
		else
		{
			y=y2;x=x2;end=y1;
			if(x2<x1)inc=1;
			if(x2>x1)inc=-1;
		}
		while(y<=end)
		{
			putpixel(x,y,15);

			if(p<0)p=p+2*dx;
			else
			{
				x=x+inc;p=p+2*(dx-dy);
			}
			y++;
			if(current==0&&c==10)
			{
				current=1;c=-1;
			}
			if(current==1&&c==6)
			{
				current=0;c=-1;
			}
			c++;
		}
	}
}

