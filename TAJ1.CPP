#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>

void main()
{
int gd=DETECT,gm,i,j;
int a=490,b=565,c=620,d=310,e=350,f=260,g1=390,h1=515;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");






///////////////////////////////////////inner/////////////////


///////////////////////////////////////////////start//////////////////////////////////////////////////////////

for(i=0;i<40;i=i+5)
{
setcolor(YELLOW);
settextstyle(1,HORIZ_DIR,6);
outtextxy(i,120,"CG Project");
line(50,219,589,219);
settextstyle(1,HORIZ_DIR,7);
outtextxy(639-i-230-40,245,"TAJMAHAL");
delay(300);
cleardevice();
}
settextstyle(1,HORIZ_DIR,6);
outtextxy(40,120,"CG Project");

line(50,219,589,219);
settextstyle(1,HORIZ_DIR,7);
outtextxy(639-40-230-40,245,"TAJMAHAL");
delay(700);
cleardevice();
for(i=450;i<200;i=i-20)
{
setcolor(LIGHTBLUE);
settextstyle(1,HORIZ_DIR,5);
//outtextxy(150,i,&quot;Let us learn about&quot;);
//outtextxy(230,i+70,&quot;TAJMAHAL&quot;);
outtextxy(18,i,"Let us learn about");
outtextxy(88,i+70,"TAJMAHAL&quo");
delay(300);
cleardevice();
}
settextstyle(1,HORIZ_DIR,5);
outtextxy(18,200,"Let us learn about");
outtextxy(88,270,"TAJMAHAL");

///////////////////////teacher////////////////////////////////
int g=258,k=20,y=5;
setcolor(LIGHTMAGENTA);
ellipse(291+g,164+k,340,360,35,40);//e1
ellipse(279+g,166+k,290,340,48,40);//e2

line(294+g,203+k,292+g,204+k);//l1
line(292+g,204+k,290+g,203+k);//l2
ellipse(293+g,164+k,179,200,35,40);//e3
ellipse(306+g,166+k,200,250,48,40);//e4
arc(257+g,160+k,90,270,4);//a1
arc(327+g,160+k,270,450,4);//a2
ellipse(257+g,126+k,270,341,50,30);//e5
ellipse(344+g,130+k,190,246,40,30);//e6
//setfillstyle(1,14);
//floodfill(257+g,126+k,14);
line(286+g,204+k,286+g,212+k);//l3
line(298+g,204+k,298+g,212+k);//l4
setcolor(BROWN);
arc(292+g,150+k,350,190,37);//a3
arc(276+g,167+k,40,140,6);//a4
arc(308+g,167+k,40,140,6);//a5
circle(276+g,171+k,3);//c1
circle(308+g,171+k,3);//c2
setfillstyle(1,6);
floodfill(276+g,171+k,6);
floodfill(308+g,171+k,6);
ellipse(247+g,153+k,280,350,8,50);//e7
ellipse(267+g,177+k,230,276,30,35);//e8
ellipse(337+g,153+k,190,266,8,50);//e9
ellipse(317+g,177+k,264,310,30,35);//e10

arc(292+g,177+k,260,290,5);//a6
setcolor(RED);
line(287+g,189+k,297+g,189+k);//l5
arc(292+g,189+k,180,360,4);//a7
setfillstyle(1,4);
floodfill(292+g,191+k,4);
setcolor(WHITE);
line(286+g,212+k,280+g,224+k);//l6
line(298+g,212+k,304+g,224+k);//l7
line(280+g,224+k,292+g,220+k);//l8
line(304+g,224+k,292+g,220+k);//l9
ellipse(292+g,212+k,180,360,6,8);//e11
setfillstyle(1,15);

floodfill(284+g,218+k,15);
floodfill(300+g,221+k,15);
setcolor(GREEN);
line(278+g,212+k,286+g,212+k);//l10
line(306+g,212+k,298+g,212+k);//l11
ellipse(280+g,227+k,90,165,27,15);//e12
ellipse(304+g,227+k,15,90,27,15);//e13
line(248+g+y,225+k,230+g+y,252+k);//l12
line(230+g+y,252+k,210+g+y,242+k);//l13
line(253+g+y,247+k,240+g+y,268+k);//l14
arc(245+g-y,266+k,280,330,5);//a8
line(235+g+y,271+k,205+g+y,257+k);//l15

line(205+g+y,257+k,210+g+y,242+k);//l16
line(336+g-y,224+k,352+g-y,259+k);//l17
arc(348+g-y,260+k,310,360,5);//a9
line(350+g-y,265+k,309+g-y,275+k);//l18
line(327+g-y,244+k,332+g-y,254+k);//l19
line(332+g-y,254+k,306+g-y,262+k);//l20
line(309+g-y,275+k,306+g-y,264+k);//l21
setcolor(LIGHTMAGENTA);
arc(207+g+y,249.5+k,62,243,8);//a10
arc(308+g-y,269+k,99,288,7);//a11
setcolor(BROWN);
line(156+g+y,218+k,199+g+y,248+k);//l22
line(157+g+y,215+k,201+g+y,245+k);//l23
line(157+g+y,215+k,156+g+y,218+k);//l24
line(310+g,247+k,282+g,249+k);//l25
line(313+g,281+k,285+g,282+k);//l26
line(282+g,249+k,285+g,282+k);//l27
line(310+g,247+k,311+g,260+k);//l28
line(312+g,274+k,313+g,281+k);//l29
setcolor(GREEN);
ellipse(249+g+y,271+k,290,410,6,30);//e14
ellipse(331+g-y,272+k,180,254,6,32);//e15
ellipse(331+g-y,272+k,116,146,6,32);//e16
setcolor(WHITE);
line(292+g,220+k,292+g,247+k);//l30

line(292+g,289+k,289+g,302+k);//l31
line(292+g,289+k,294+g,300+k);//l32
setcolor(GREEN);
ellipse(269+g+y,300+k,176,326,19,5);//e17
ellipse(308+g+y,300+k,186,311,18,5);//e18
setcolor(BROWN);
ellipse(252+g+y,331+k,91,270,4,30);//e19
ellipse(327+g-y,334+k,286,450,4,30);//e20
ellipse(296+g,358+k,210,307,45,6);//e21
setcolor(WHITE);
circle(286+g,229+k,3);//c3
circle(286+g,240+k,3);//c4
setfillstyle(1,15);
floodfill(286+g,229+k,15);
floodfill(286+g,240+k,15);
line(262+g+y,284+k,276+g+y,284+k);//l33
arc(269+g+y,284+k,180,360,7);//a12
line(296+g+y,284+k,310+g+y,284+k);//l34
arc(303+g+y,284+k,180,360,7);//a13
setfillstyle(1,15);
floodfill(264+g+y,286+k,15);
floodfill(298+g+y,286+k,15);
setcolor(LIGHTMAGENTA);
line(280+g+y+2,365+k,278+g+y+2,415+k);//l35
line(260+g+y+2,364+k,262+g+y+2,415+k);//l36

line(286+g+y+2,365+k,288+g+y+2,415+k);//l37
line(306+g+y+2,365+k,304+g+y+2,415+k);//l38
setcolor(BROWN);
ellipse(277+g,415+k,180,360,8,4);//e22
ellipse(303+g,415+k,180,360,8,4);//e23
ellipse(277+g,415+k,180,360,8,20);//e24
ellipse(303+g,415+k,180,360,8,20);//e25
setcolor(WHITE);
putpixel(277+g,429+k,15);//shoes
putpixel(277+g,425+k,15);
putpixel(303+g,429+k,15);
putpixel(303+g,425+k,15);
/////////////////////////////////////////////////////

getch();
cleardevice();
////////////////////////////////////////////////end//////////////////////////////////////////////////////////
//////







int h=40;
//circle(100,50,30);
//floodfill(100,50,15);
setfillstyle(SOLID_FILL,WHITE);
arc(130,80,128,312,50);
arc(163,52,170,270,65);
floodfill(95,65,15);
line(0,440,639,440);

//=================================Ist MINAR========================//

int l=-20;

line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);
delay(150);

line(23+l,328+h,32+l,334+h); // slant
line(88+l,328+h,80+l,334+h); // slant
line(83+l,323+h,75+l,334+h); // slant
line(75+l,323+h,70+l,332+h);
line(66+l,323+h,65+l,332+h); // slant
line(57+l,323+h,57+l,332+h); // slant
line(30+l,323+h,39+l,334+h); // slant
line(38+l,323+h,45+l,332+h);
line(48+l,323+h,51+l,332+h); // slant
delay(150);
ellipse(57+l,320+h,350,190,34,5);
ellipse(57+l,327+h,350,190,34,5);
ellipse(57+l,337+h,0,180,25,5);
delay(150);
line(22+l,320+h,22+l,328+h);
line(91+l,320+h,91+l,327+h);
delay(150);
setfillstyle(6,15);
floodfill(60+l,320+h,15);
delay(150);
setfillstyle(10,15);

floodfill(60+l,320+h+15,15);
delay(150);

line(35+l,315+h,38+l,242+h);
line(80+l,315+h,75+l,242+h);
delay(150);

//
/////////////////////////////////STAGE 1/////////////////////////////
int t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h); // slant
line(88+l,328+t+2+h,76+l,334+t+h);delay(150); // slant
//line(+l83,323+t+4,75,334+t); // slant
line(78+l,323+t+3+h,71+l,332+t+h);
line(66+l,323+t+2+h,65+l,332+t+h); // slant
line(57+l,323+t+2+h,57+l,332+t-2+h);delay(150); // slant
//line(30,323+t+2,39,334+t); // slant
line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h); // slant
delay(150);
ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);
ellipse(57+l,337+t-1+h,0,180,18,5);
delay(150);
line(26+l,320+t+3+h,26+l,328+t+2+h);

line(88+l,320+t+3+h,88+l,327+t+3+h); delay(150);

setfillstyle(6,15);
floodfill(60+l,320+h+t,15);delay(300);
setfillstyle(10,15);
floodfill(60+l,320+h-35,15);
delay(150);

line(38+l,225+h,41+l,152+h);
line(75+l,225+h,72+l,152+h);
delay(150);

t=-182;
line(32+l,328+t+4+h,32+7+l,334+t+h); // slant
line(80+l,328+t+4+h,73+l,334+t+h);delay(150); // slant
//line(+l83,323+t+4,75,334+t); // slant
line(76+l,323+t+5+h,71+l,332+t+h);
line(66+l,323+t+4+h,65+l,332+t+h); // slant
line(57+l,323+t+4+h,57+l,332+t-2+h);delay(150); // slant
//line(30,323+t+2,39,334+t); // slant
line(39+l,323+t+6+h,45+l,332+t+1+h);
line(48+l,323+t+4+h,51+l,332+t+h); // slant
delay(150);

ellipse(57+l,320+t+6+h,360,190,24,5);
ellipse(57+l,327+t+4+h,360,190,24,5);
ellipse(57+l,337+t-1+h,0,170,16,5);
delay(150);
line(32+l,320+t+6+h,32+l,328+t+3+h);
line(81+l,320+t+6+h,81+l,327+t+3+h);
delay(150);
setfillstyle(6,15);
floodfill(60+l,322+h+t,15);delay(150);

setfillstyle(10,15);
floodfill(60+l,322+h+t+30,15);delay(150);

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);delay(150);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);
delay(150);
line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);
delay(150);

line(34+l,107+h,28+l,102+h); //slant
line(81+l,107+h,87+l,102+h);
delay(150);
line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);
delay(150);
line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);
delay(150);

ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);
delay(150);
line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h); delay(150);
setfillstyle(6,15);
floodfill(60+l-2,322+h+t-60,15);
delay(150);
setfillstyle(10,15);

floodfill(60+l-2,322+h+t-30,15);
delay(150);

l=547;
/////////////////////////////////STAGE 2///////////////////////////

line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);delay(150);

line(23+l,328+h,32+l,334+h); // slant
line(88+l,328+h,80+l,334+h); // slant
line(83+l,323+h,75+l,334+h); // slant
line(75+l,323+h,70+l,332+h);
line(66+l,323+h,65+l,332+h); // slant
line(57+l,323+h,57+l,332+h); // slant
line(30+l,323+h,39+l,334+h); // slant
line(38+l,323+h,45+l,332+h);
line(48+l,323+h,51+l,332+h); // slant
delay(150);
ellipse(57+l,320+h,350,190,34,5);
ellipse(57+l,327+h,350,190,34,5);
ellipse(57+l,337+h,0,180,25,5);delay(150);
line(22+l,320+h,22+l,328+h);
line(91+l,320+h,91+l,327+h);delay(150);
setfillstyle(6,15);

floodfill(60+l,320+h,15);
delay(150);
setfillstyle(10,15);

floodfill(60+l,320+h+15,15);
delay(150);

line(35+l,315+h,38+l,242+h);
line(80+l,315+h,75+l,242+h);
delay(150);

t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h); // slant
line(88+l,328+t+2+h,76+l,334+t+h);delay(150); // slant
//line(+l83,323+t+4,75,334+t); // slant
line(78+l,323+t+3+h,71+l,332+t+h);
line(66+l,323+t+2+h,65+l,332+t+h); // slant
line(57+l,323+t+2+h,57+l,332+t-2+h);delay(150); // slant
//line(30,323+t+2,39,334+t); // slant
line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h); // slant
delay(150);
ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);
ellipse(57+l,337+t-1+h,0,180,18,5);

delay(150);
line(26+l,320+t+3+h,26+l,328+t+2+h);
line(88+l,320+t+3+h,88+l,327+t+3+h);delay(150);

setfillstyle(6,15);
floodfill(60+l,320+h+t,15);delay(150);
setfillstyle(10,15);
floodfill(60+l,320+h-35,15);delay(150);

/////////////////////////////////STAGE 3/////////////////////////////

line(38+l,225+h,41+l,152+h);
line(75+l,225+h,72+l,152+h);
delay(150);

t=-182;
line(32+l,328+t+4+h,32+7+l,334+t+h); // slant
line(80+l,328+t+4+h,73+l,334+t+h);delay(150); // slant
//line(+l83,323+t+4,75,334+t); // slant
line(76+l,323+t+5+h,71+l,332+t+h);
line(66+l,323+t+4+h,65+l,332+t+h); // slant
line(57+l,323+t+4+h,57+l,332+t-2+h);delay(150); // slant
//line(30,323+t+2,39,334+t); // slant
line(39+l,323+t+6+h,45+l,332+t+1+h);
line(48+l,323+t+4+h,51+l,332+t+h);delay(150); // slant

ellipse(57+l,320+t+6+h,360,190,24,5);
ellipse(57+l,327+t+4+h,360,190,24,5);
ellipse(57+l,337+t-1+h,0,170,16,5);
delay(150);
line(32+l,320+t+6+h,32+l,328+t+3+h);
line(81+l,320+t+6+h,81+l,327+t+3+h);
delay(150);
setfillstyle(6,15);
floodfill(60+l,322+h+t,15);delay(150);

setfillstyle(10,15);
floodfill(60+l,322+h+t+30,15);delay(150);

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);delay(150);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);
delay(150);
line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);
delay(150);

line(34+l,107+h,28+l,102+h); //slant
line(81+l,107+h,87+l,102+h);
delay(150);
line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);
delay(150);
line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);
delay(150);

ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);
delay(150);
line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);delay(150);
setfillstyle(6,15);
floodfill(60+l-2,322+h+t-60,15);
delay(150);
setfillstyle(10,15);

floodfill(60+l-2,322+h+t-30,15);


/////////////////////////////////2nd MINAR////////////////////////////////

l=547;

line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);delay(150);

//////////////////////////////STAGE 1////////////////////////////////////
line(23+l,328+h,32+l,334+h); // slant
line(88+l,328+h,80+l,334+h); // slant
line(83+l,323+h,75+l,334+h); // slant
line(75+l,323+h,70+l,332+h);
line(66+l,323+h,65+l,332+h); // slant
line(57+l,323+h,57+l,332+h); // slant
line(30+l,323+h,39+l,334+h); // slant
line(38+l,323+h,45+l,332+h);
line(48+l,323+h,51+l,332+h); // slant
delay(150);
ellipse(57+l,320+h,350,190,34,5);
ellipse(57+l,327+h,350,190,34,5);
ellipse(57+l,337+h,0,180,25,5); delay(150);
line(22+l,320+h,22+l,328+h);
line(91+l,320+h,91+l,327+h); delay(150);
setfillstyle(6,15);

floodfill(60+l,320+h,15);
delay(150);
setfillstyle(10,15);

floodfill(60+l,320+h+15,15);
delay(150);

///////////////////////////////////STAGE 2//////////////////////////
line(35+l,315+h,38+l,242+h);
line(80+l,315+h,75+l,242+h);
delay(150);
t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h); // slant
line(88+l,328+t+2+h,76+l,334+t+h);delay(150); // slant
//line(+l83,323+t+4,75,334+t); // slant
line(78+l,323+t+3+h,71+l,332+t+h);
line(66+l,323+t+2+h,65+l,332+t+h); // slant
line(57+l,323+t+2+h,57+l,332+t-2+h);delay(150); // slant
//line(30,323+t+2,39,334+t); // slant
line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h); // slant
delay(150);
ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);
ellipse(57+l,337+t-1+h,0,180,18,5);

delay(150);
line(26+l,320+t+3+h,26+l,328+t+2+h);
line(88+l,320+t+3+h,88+l,327+t+3+h);delay(150);

setfillstyle(6,15);
floodfill(60+l,320+h+t,15);delay(150);
setfillstyle(10,15);
floodfill(60+l,320+h-35,15);

delay(150);
getch();

//////////////////////////////////TAJ MAHAL//////////////////////////





//=================================Ist MINAR========================//


////////////////////////////////////////////
rectangle(268,283,372,440);//r1
rectangle(275,290,365,440);//r2
setfillstyle(1,15);
floodfill(269,284,15);
delay(150);
line(280,440,280,350);//l2
line(360,440,360,350);delay(150);//l3
ellipse(315,349,130,180,35,40);//e1
ellipse(325,349,360,50,35,40);//e2
ellipse(275,280,290,326,53,40);//e3
ellipse(361,280,216,255,53,40);//e4
setfillstyle(9,7);
floodfill(276,291,15);
delay(150);
line(280,364,359,364);//l4

line(280,360,359,360);//l5
setfillstyle(1,15);
floodfill(281,361,15);
delay(150);

rectangle(296,367,344,440);//r3
rectangle(299,370,341,440);//r4
setfillstyle(1,15);
floodfill(297,368,15);
delay(150);
rectangle(296,378,344,380);//r5
setfillstyle(1,15);
floodfill(301,379,15);
delay(150);
line(302,405,302,440);//l6
line(338,405,338,440);//l7
delay(150);
ellipse(327,405,108,180,25,20);//e5
ellipse(313,405,360,74,25,20);//e6
delay(150);
line(310,391,310,440);//l8
line(329,390,329,440);//l9
line(311,402,329,402);//l10
line(311,422,329,422);//l11
setfillstyle(7,15);
floodfill(312,403,15);
delay(150);
line(302,412,338,412);//l12

line(302,428,310,428);//l13

line(329,428,338,428);//l14
line(302,345,302,360);//l15
line(338,345,338,360);//l16
delay(150);
ellipse(327,345,108,180,25,20);//e7
ellipse(313,345,360,74,25,20);//e8
delay(150);
line(310,331,310,360);//l17
line(329,330,329,360);//l18
line(311,342,329,342);//l19
line(311,355,329,355);//l20
line(302,352,310,352);//l21
line(329,352,338,352);//l22
delay(150);
rectangle(245,260,400,440);//r6
rectangle(230,245,415,440);//r7
rectangle(230,425,275,440);//r8
setfillstyle(1,15);
floodfill(231,426,15);
floodfill(246,426,15);
delay(150);
rectangle(365,425,415,440);//r9
setfillstyle(1,15);
floodfill(373,426,15);
floodfill(401,426,15);

delay(150);
line(420,245,420,440);//l23

line(225,245,225,440);//l24
line(222,245,425,245);//l25
delay(150);
setfillstyle(6,15);
floodfill(226,246,15);
floodfill(416,246,15);
delay(150);
line(222,240,425,240);//l26
line(415,240,415,205);//l27
line(420,240,420,205);//l28
line(225,240,225,205);//l29
line(230,240,230,205);//l30
delay(150);
ellipse(222,242,90,270,2.5,2.5);//e9
ellipse(425,242,270,90,2.5,2.5);//e10
delay(150);
rectangle(231,230,414,239);//r10
delay(150);
line(221,205,233,205);//l31
line(411,205,423,205);//l32
delay(150);
ellipse(227,204,0,180,9,1);//e11

ellipse(417,204,0,180,9,1);//e12
ellipse(227,203,0,180,6,7);//e13
ellipse(417,203,0,180,6,7);//e14
delay(150);
line(227,195,227,192);//l33
line(417,195,417,192);//l34
delay(150);
ellipse(321,258,48,130,140,50);//e15
ellipse(321,255,48,130,140,50);//e16
ellipse(321,241,48,130,140,50);//e17

ellipse(321,238,48,129,137,50);//e18

setfillstyle(6,15);
floodfill(322,193,15);
delay(150);
rectangle(150,283,225,294);//r11
setfillstyle(9,15);
floodfill(151,284,15);
delay(150);
line(150,240,150,440);//l35
line(150,298,225,298);//l36
line(146,240,146,440);//l37
line(141,240,153,240);//l38
setfillstyle(6,15);

floodfill(147,241,15);
delay(150);
ellipse(147,239,0,180,9,1);//e19
ellipse(147,237,0,180,6,7);//e20
delay(150);
line(147,229,147,226);//l39
line(168,257,168,282);//l40
line(202,257,202,282);//l41
delay(150);
ellipse(185,257,0,170,16,5);//e21
ellipse(179,275,340,216,4,15);//e22
ellipse(190,274,327,216,4,15);//e23
ellipse(170,275,337,206,2,15);//e24

ellipse(200,275,337,206,2,15);//e25
delay(150);
line(162,257,168,257);//l42
line(202,257,209,257);//l43
line(162,257,156,252);//l44
line(209,257,215,252);//l45
line(156,252,162,248);//l46
line(215,252,209,248);//l47
line(162,248,186,245);//l48
line(186,245,209,248);//l49
delay(150);

ellipse(193,242,104,190,30,30);//e26
ellipse(178,242,350,76,30,30);//e27
setfillstyle(9,15);
floodfill(185,244,15);
delay(150);
line(186,211,186,213);//l50
circle(186,208,3);//c1
line(186,205,186,203);//l51
circle(186,200,2);//c2
line(186,198,186,197);//l52
circle(186,195,1);//c3
delay(150);
line(186,194,186,191);//l53
line(95,255,95,440);//l54
line(91,255,91,440);//l55
line(86,254,100,254);//l56
setfillstyle(6,15);

floodfill(92,255,15);
delay(150);
ellipse(93,253,0,180,9,1);//e28
ellipse(93,252,0,180,6,7);//e29
delay(150);
line(93,244,93,241);//l57
line(146,294,97,302);//l58

line(146,298,97,306);//l59
line(146,283,97,291);//l60
setfillstyle(9,15);
floodfill(98,292,15);
delay(150);
rectangle(155,302,220,364);//r12
rectangle(155,372,220,439);//r13
delay(150);
line(164,407,164,438);//l61
line(210,407,210,438);//l62
delay(150);
ellipse(199,409,108,176,35.5,30);//e30
ellipse(175,409,364,72,35.5,30);//e31
delay(150);
line(164,332,164,363);//l63
line(210,332,210,363);//l64
delay(150);
ellipse(194,332,105,180,30,25);//e32
ellipse(180,332,360,80,30,25);//e33
setfillstyle(6,15);
floodfill(156,303,15);
floodfill(156,373,15);
delay(150);
line(141,305,141,360);//l65
line(101,312,101,367);//l66

line(141,305,101,312);//l67
line(141,360,101,367);//l68
line(141,375,141,440);//l69
line(101,382,101,440);//l70
line(141,375,101,382);//l71
line(106,328,106,366);//l72
line(137,328,137,361);//l73
delay(150);
ellipse(127,328,105,180,20,15);//e34
ellipse(117,328,360,80,20,15);//e35
delay(150);
line(106,402,106,440);//l74
line(137,402,137,440);//l75
delay(150);
ellipse(127,402,105,180,20,15);//e36
ellipse(117,402,360,80,20,15);//e37
delay(150);
rectangle(178,415,197,439);//r14
setfillstyle(7,15);
floodfill(179,416,15);
delay(150);
rectangle(178,340,197,364);//r15
setfillstyle(7,15);
floodfill(179,341,15);
delay(150);

line(127,417,127,440);//l76
line(116,420,116,440);//l77
line(116,420,127,417);//l78

floodfill(117,421,15);
delay(150);
line(127,341,127,361);//l79
line(116,344,116,364);//l80
line(116,344,127,341);//l81
floodfill(117,345,15);
delay(150);
rectangle(420,283,496,294);//r16
setfillstyle(9,15);
floodfill(421,284,15);
delay(150);
line(420,298,495,298);//l82
line(496,240,496,440);//l83
line(500,240,500,440);//l84
delay(150);
ellipse(457,256,0,170,16,5);//e38
line(440,256,440,282);//l85
line(474,256,474,282);//l86
delay(150);
ellipse(451,274,340,216,4,15);//e39
ellipse(462,273,327,216,4,15);//e40

ellipse(472,274,327,216,2,15);//e41
ellipse(442,274,327,216,2,15);//e42
delay(150);
line(434,256,440,256);//l87
line(475,256,481,256);//l88
line(434,256,428,251);//l89
line(481,256,487,251);//l90
delay(150);
line(428,251,434,247);//l91
line(487,251,481,247);//l92
line(434,247,458,244);//l93
line(458,244,481,247);//l94
delay(150);
ellipse(465,241,104,190,30,30);//e43
ellipse(450,241,350,76,30,30);//e44
setfillstyle(9,15);
floodfill(465,224,15);
delay(150);
line(458,210,458,212);//l95
circle(458,207,3);//c4
line(458,204,458,202);//l96
circle(458,199,2);//c5
line(458,197,458,196);//l97
circle(458,194,1);//c6
delay(150);

line(458,193,458,190);//l98
line(491,239,504,239);//l99
setfillstyle(6,15);
floodfill(497,241,15);
delay(150);
ellipse(497,238,0,180,9,1);//e45
ellipse(497,237,0,180,6,7);//e46
delay(150);
line(497,229,497,226);//l100
line(551,255,551,440);//l101
line(555,255,555,440);//l102
delay(150);
line(551,302,502,294);//l103
line(551,306,502,298);//l104
line(551,291,502,283);//l105
setfillstyle(9,15);
floodfill(502,284,15);
delay(150);
line(545,254,559,254);//l106
setfillstyle(6,15);
floodfill(552,256,15);
delay(150);
ellipse(552,253,0,180,9,1);//e47
ellipse(552,252,0,180,6,7);//e48
line(552,244,552,241);//l107

delay(150);
rectangle(425,302,490,364);//r17
rectangle(425,372,490,439);//r18
delay(150);
line(437,407,437,438);//l108
line(483,407,483,438);//l109
delay(150);
ellipse(472,409,108,176,35.5,30);//e49
ellipse(448,409,364,72,35.5,30);//e50
setfillstyle(6,15);
floodfill(426,373,15);
delay(150);
line(437,332,437,363);//l110
line(483,332,483,363);//l111
delay(150);
ellipse(467,332,105,180,30,25);//e51

ellipse(453,332,360,80,30,25);//e52
setfillstyle(6,15);
floodfill(426,303,15);
delay(150);
line(546,312,546,367);//l112
line(506,305,506,360);//l113
line(506,305,546,312);//l114
line(506,360,546,367);//l115

line(546,380,546,440);//l116
line(506,373,506,440);//l117
line(506,373,546,380);//l118
delay(150);
rectangle(451,415,470,439);//r19
setfillstyle(7,15);
floodfill(452,416,15);
delay(150);
rectangle(451,340,470,364);//r20
setfillstyle(7,15);
floodfill(452,341,15);
delay(150);
line(519,417,519,440);//l119
line(530,420,530,440);//l120
line(519,417,530,420);//l121
floodfill(520,418,15);
delay(150);
line(530,344,530,364);//l122

line(519,341,519,361);//l123
line(519,341,530,344);//l124
floodfill(520,342,15);
delay(150);
line(510,328,510,361);//l125
line(541,329,541,366);//l126

delay(150);
ellipse(531,328,105,180,21,15);//e53
ellipse(521,328,360,80,20,15);//e54
delay(150);
line(510,405,510,439);///127
line(541,405,541,440);//l128
delay(150);
ellipse(531,405,105,180,20,15);//e55
ellipse(521,405,360,80,20,15);//e56

//////////TOMB/////////
ellipse(315,170,140,210,105,100);
ellipse(330,170,330,40,105,100);

ellipse(292,167,105,140,75,95);
ellipse(353,167,40,75,75,95);
delay(150);
ellipse(323,78,350,190,60,8);
ellipse(323,77,350,190,60,8);



ellipse(240,24,321,358,78,71);
ellipse(192,40,342,7,128,100);

ellipse(448,30,180,203,128,100);
ellipse(443,5,194,220,128,100);
ellipse(438,-9,203,234,128,100);
ellipse(198,-6,310,340,128,100);
delay(150);
ellipse(319,30,0,360,7,2);

floodfill(320,29,15);
circle(319,24,3);
line(319,20,319,18);
circle(319,14,4);
line(319,9,319,0);
//ellipse(319,4,0,360,2,3);
circle(319,2,1);
line(316,6,322,6);
line(316,6,314,4);
line(322,6,324,4);
setfillstyle(10,15);
floodfill(324,160,15);
delay(150);
setfillstyle(10,15);

floodfill(322,160,15);
setfillstyle(6,15);

floodfill(322,193,15);

/////////////////////////////////



sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
   sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(c); delay(700); nosound(); sound(0); delay(500); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
   sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
    sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
     sound(c); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(c); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(500); nosound();

	 sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(1000); nosound();



	sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
   sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(c); delay(700); nosound(); sound(0); delay(500); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
   sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
    sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
     sound(c); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(c); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(500); nosound();

	 sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();

	sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(300); nosound(); sound(0); delay(10); nosound();

		sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(200); nosound(); sound(0); delay(10); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(500); nosound(); sound(0); delay(500); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(500); nosound(); sound(0); delay(10); nosound();


		sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(300); nosound(); sound(0); delay(10); nosound();

	sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(200); nosound(); sound(0); delay(10); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(500); nosound(); sound(0); delay(500); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	  sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
	   sound(h1); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(h1); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(d); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();

	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();



	   sound(g1); delay(300); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(300); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();

	      sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();


	       sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();

	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();



	   sound(g1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();

	      sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();

while(!kbhit())
{
delay(40);
putpixel(random(640),random(248),random(15));
}

getch();
cleardevice();

setcolor(13);
rectangle(1,1,639,479);
rectangle(15,15,624,464);
//setcolor(LIGHTBLUE);
setfillstyle(6,11);

floodfill(2,2,13);
settextstyle(7,0,3);
setcolor(13);

outtextxy(20,50,"!!!!!!!!!!!!A DREAM IN MARBLE!!!!!!!!!.");
outtextxy(20,80,"TAJ MAHAL is a white marble mausoleum.");
setcolor(4);
outtextxy(20,110,"It is on the south bank of the YAMUNA river.");
outtextxy(20,140,"It was built in 1632 by the Shah Jahan.");
setcolor(5);
outtextxy(20,170,"It was built for Queen Mumtaz Mahal.");
outtextxy(20,200,"It is located in Agra,UP,India.");
setcolor(10);
outtextxy(20,230,"It is one of the 7 Wonders of the World.");
outtextxy(20,260,"It has 4 minarets situated at all 4 corners.");
setcolor(11);
outtextxy(20,290,"As said by Rabindranath Tagore.");
outtextxy(20,320,"The Tomb is the centerpiece of a 17-hectare");
setcolor(12);
outtextxy(20,350,"complex that includes a mosque,a guest house");
outtextxy(20,380,"and is set in formal gardens bounded on 3");
outtextxy(20,410,"sides by a crenellated wall.");
while(!kbhit())
{
delay(40);
putpixel(random(640),random(248),random(15));
}

getch();
cleardevice();

setcolor(13);
rectangle(1,1,639,479);
rectangle(15,15,624,464);
//setcolor(LIGHTBLUE);
setfillstyle(6,11);

floodfill(2,2,13);
settextstyle(7,0,3);
setcolor(12);

outtextxy(20,50,"GROUP NO:-5 & TEAM MEMEBERS ARE:- .");
setcolor(11);
outtextxy(20,100,"TEAM LEADER-ANSH SETH (2017CSA1028).");
setcolor(4);
outtextxy(20,150,"ANMOLPREEET KAUR (2017CSA1027).");
setcolor(5);
outtextxy(20,200,"ANKUSH BHTOA (2017CSA1026).");
setcolor(10);
outtextxy(20,250,"ANSHUL NAYYAR (2017CSA1029).");
setcolor(14);
outtextxy(20,300,"ANUJ BHARGAV (2017CSA1030).");


getch();
}


