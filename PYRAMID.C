#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main(void){
int gdriver=DETECT,gmode,i,k,x,y,t;
char c;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");


l:y=0;
t=10;

for(i=1; i<20; i++)
{
   cleardevice();

//---------------------------  SUN  -------------------------
 //---------RISE
   if(i>10 && i<15)
    {y++;
     x=0;
      for(k=30; k>0; k--)
       {
	 if(x<10)
	  {
	   setcolor(6);
	   x++;
	   circle(25*y,300-y*50,k-x);
	  }
	  else
	  {
	   setcolor(14);
	   x++;
	   circle(25*y,300-y*50,30-x);
	  }
      }
    }
  //--NOON
  else if(i>=15 && i<18)
    {y++;
     x=0;
      for(k=30; k>0; k--){
	   setcolor(14);
	   x++;
	   circle(60*y,60,k);
	   }

  }
  //-----EVE
  else if(i>=18)
    {
     if(i==18)	y=1;
     y++;
     x=0;
      for(k=30; k>0; k--)
       {
	 if(x<t)
	  {
	   setcolor(6);
	   x++;
	   circle(400+y*90,60+y*50,k-x);
	  }
	  else
	  {
	   setcolor(14);
	   x++;
	   circle(400+y*90,60+y*50,30-x);
	  }
	}
   t--;
  }


//--------------------  PYRAMID  ------------------------------
setcolor(i+1);
setfillstyle(1,i+1);
//leftpyramid
line(200,140,100,240);			//leftline
line(200,140,252,200);			//rightline
line(100,240,220,240);			//bottomline
line(200,140,120,240);			//midline
line(252,200,220,240);                  //pack
floodfill(200,170,i+1);

setcolor(i+1);
setfillstyle(0,i+1);
floodfill(120,230,i+1);

setcolor(i+2);
setfillstyle(1,i+2);
//rightpyramid
line(430,140,380,200);			//leftline
line(430,140,530,240);			//rightline
line(420,240,530,240);			//bottomline
line(430,140,400,220);			//midline
line(380,200,420,240);
floodfill(435,180,i+2);

setcolor(i);
setfillstyle(1,i);
//midpyramid
line(310,130,180,290);			//leftline
line(310,130,470,290);			//rightline
line(180,290,470,290);			//bottomline
line(310,130,220,290);			//midline
floodfill(313,170,i);

//------------  MOON  --------------
 if(i>=4 && i<6)
 {
 setcolor(15);
 setfillstyle(1,15);                            //midnight  no.2
 ellipse(550-i*70,80,208,55,30,30);
 ellipse(541-i*70,70,240,29,31,31);
 setcolor(2);
 floodfill(555-i*70,102,15);
 }

  if(i>=6)
 {
 setcolor(15);
 setfillstyle(1,15);                                //morning   no.3
 ellipse(160-i*20,80+i*20,208,55,30,30);
 ellipse(151-i*20,70+i*20,240,29,31,31);
 setcolor(2);
 floodfill(165-i*20,102+i*20,15);
 }

if(i<4){
  setcolor(15);
  setfillstyle(1,15);
 ellipse(610-i*50,300-i*70,208,55,30,30);             //eve  no.1
 ellipse(601-i*50,290-i*70,240,29,31,31);
 setcolor(2);
 floodfill(615-i*50,322-i*70,15);
 }

/* setcolor(14);
 setfillstyle(1,14);
  circle(10+i*20,280-i*20,30);
  floodfill(10+i*20,280-i*20,14);
  */

  delay(300);
  //TERMINATE
  if(i==19)
  {
	 settextstyle(1,0,1);
	outtextxy(350,350,"PRESS N TO EXIT");
     c=getch();
   if(c=='n' || c=='N')
	 exit(0);

   else
   {
	goto l;
   }
  }
}
   /*    x=0;
for(i=0;i<11;i++)       {
	 settextstyle(x,0,1);
	outtextxy(40,50+i*30,"PRESS N TO EXIT");
	 x++;
	} */
getch();
closegraph();

}



