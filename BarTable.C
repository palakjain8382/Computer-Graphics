#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd = DETECT, gm;
 int t,tb=14,i,j,k;
 char c;					     //colors
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

 l:for(k=1; k!=0; k++)
   {
      for(i=0;i<50;i++)
	{
	 cleardevice();
 //-----------------------------  TABLE  ----------------------------
	 setcolor(6);
	 setfillstyle(1,6);
		rectangle(160,270,440,280);          //top rec
	 floodfill(161,271,6);
		 rectangle(300,280,310,430);         //bich ki line
	 floodfill(301,281,6);
		 rectangle(240,430,370,440);         //bottom rec
	 floodfill(241,431,6);

		 ellipse(220,410,353,68,50,140);     //base
		 ellipse(390,410,112,188,50,140);

	 setcolor(tb);
	 setfillstyle(1,tb);
		 ellipse(221,410,353,68,50,140);     //left
		 ellipse(389,410,112,188,50,140);    //right
		 line(240,281,370,281);              //horizntl top
		 line(270,429,340,429);              //horizntl bttm
		 line(300,282,300,429);              //verticl left
		 line(310,282,310,429);              //vertical right
	 floodfill(280,360,tb);
	 floodfill(330,360,tb);

	 settextstyle(2,0,0);
	 outtextxy(540,439,"-by PALAK JAIN");
 //-----------------------------  beer bottle -------------------------
	 setcolor(15);
	 setfillstyle(1,15);
		 line(233,269,233,235);              //left beer bottl line
		 line(255,269,255,232);              //right "

		 line(233,269,255,269);		     //base line bottle

		 ellipse(243,230,130,200,10,13);      //left curve
		 ellipse(245,231,355,60,10,13);      //right curve

// setcolor(3);
		// ellipse(247,200,131,220,6,17);       //left curve k upr
		// ellipse(245,200,320,60,5,17);      //right   "

// setcolor(13);                                     //circle k niche left
		ellipse(237,215,280,14,3,5);         //               right
		ellipse(251,215,158,273,3,5);


		  line(240,195,240,213);              //neck left
		  line(248,195,248,213);             //neck right

		//line(
// setcolor(14);
		 ellipse(244,194/*185*/,0,360,4,2);  //circle
		 ellipse(244,196/*185*/,0,360,4,2);  //circle
		 ellipse(243,195/*185*/,0,360,4,2);  //circle
		 ellipse(245,195/*185*/,0,360,4,2);  //circle

		 line(234,230,254,230);
	 setcolor(14);
	 setfillstyle(6,14);
		rectangle(234,232,254,268);          //beer in bottle
	 floodfill(235,253,14);
	 /* for(t=0;t<30;t++){
	for(j=234;j<255;j++)
	 putpixel(j,268-t,14);
 }*/
 //--------------------------  BEER GLASS  -------------------------
 setcolor(15);
		 rectangle(186,269,220,230);         //base

		 ellipse(180,240,0,180,5,2);         //top handle

		 line(175,240,175,260);              //handle

		 ellipse(180,260,180,360,5,2);       //bottom handle

 //-------BUBBLE
		 arc(193,225,100,220,9);
		 ellipse(196,215,10,190,6,4);
		 ellipse(207,215,359,160,5,3);
		 arc(212,226,350,89,8);

 //-------BEER
 //		line(186,240,220,240);               //beer fill up line
		for(j=0;j<3;j++)                     //3 bubbles
		{
		 circle(193+(j*10),235,2);
		}
	 setcolor(14);
	 setfillstyle(6,14);
		rectangle(187,240,219,268);
	 floodfill(189,241,14);

 //--------BUBBLE MOVE UP
 setcolor(15);
	 if(i<49){
		   circle(200,215-i,3);
		   circle(200,215-(i*0.5),3);
	   }
 //--------BUBBLE BURST
	else{
		   for(j=0; j<4; j++)
		    {
			   ellipse(190,163,j,105,6,6);     //UPAR
			   ellipse(210,162,90,180,6,6);

			   delay(100);
		   }

			   ellipse(190,159,4,105,8,8);
			   ellipse(210,159,90,180,8,8);
	    }

//------------------------  CIGAAR  -----------------------------
//-------CIGAAR BOX
		line(270,267,270,260);               //left line
		line(295,267,295,260);               //right
		line(270,267,295,267);               //horizontal line

//------CIGAAR
	setcolor(6);
		line(288,260,300,252);               //upr vali ---
		line(285,256,297,248);               //horizntl parellel lins

		line(288,260,285,256);               //packing line vertical
	setcolor(15);
		line(286,261,283,257);               //last k up vali
		line(286,262,283,258);               //double line

		line(284,263,281,259);                //sbse last vali line
	setcolor(6);
		ellipse(299,251,50,95,4,3);          //top curve piche
		ellipse(296,248,283,0,6,6);          //niche vala curve
	setcolor(15);
		circle(293,254,1);                   //design m circle

 //----jiyaJalenJaanJalen---DHUA JALE
 //----SMOKE
 setcolor(2);
	if(i%4==0)
	 {
		ellipse(281,252,319,80,3,4);              //right upr
		ellipse(284,244,130,250,3,4);

		ellipse(278,252,319,80,3,4);              //left upr
		ellipse(281,244,130,250,3,4);             //left
	  }
       else
	{
		ellipse(280,248,319,80,3,4);              //right upr
		ellipse(283,240,130,250,3,4);

		ellipse(277,248,319,80,3,4);              //left upr
		ellipse(280,240,130,250,3,4);             //left
	 }

//---------------------- JAAM CHALAK JAAE  -------------------------
//		rectangle(360,269,410,250);
		line(360,269,410,269);             //bottom horizontl line
		line(360,250,410,250);             //top

		line(360,250,360,269);             //lect vertical line

		ellipse(410,259,269,330,15,10);    //niche
		ellipse(410,260,30,90,15,10);       //upr

		ellipse(425,269,80,150,6,5);       //niche chota curve
		ellipse(425,250,200,280,6,5);       //upr

		line(428,264,438,264);                  //niche
		line(427,255,438,255);                  //upr strght line

		ellipse(438,259,0,360,3,5);           //circle

		settextstyle(2,1,1);
		outtextxy(390,249,"WATER");

 //------BOOND ON BOTTLE
	setcolor(15);
	setfillstyle(1,15);
		arc(380,260,75,300,3);

		line(381,257,388,260);
		line(388,260,382,263);
	circle(381,259,1);
	floodfill(381,261,15);

 //------animation on fallng water
 setcolor(15);
		line(360,255,443,261);                //liquid

		for(j=0;j<5;j++)
			if(i<38){
				line(443,263,443+j,290+i*4);   //niche girta soda
			}
			else
			{
				line(443,263,443+j,440);       //final display

				ellipse(443,440,0,360,30+j,7);  //feli daaru

				ellipse(430,415,0,80,5,5);      //left upr
				ellipse(456,415,90,170,5,5);    //right

				ellipse(428,430,0,80,10,10);    //left niche cheete
				ellipse(460,430,90,170,10,10);  //right
			}

//-------------------------------  PAKODA  ------------------------------
	setcolor(15);
			ellipse(330,260,180,360,15,10);   //bowl

			line(315,260,345,260);            //bowl ke upr vali line

			for(j=0;j<5;j++) {
				setcolor(6);
				circle(320+j*5,258,3);
				if(j<3)
				{
				 circle(323+j*6,254,3);
				}
			}
 //-------BOWL DESIGN
			for(j=0;j<3;j++)
				circle(325+j*2,265,1);

 //------DETAILS PAKODI
			circle(320,254,1);
			circle(324,251,1);

	 delay(100);                                 //DELAY
	}
 //-----TERMINATION STAT.
    printf("Press n to exit and any other key to continue");
    c = getch();
      if(c=='N' || c=='n')
	exit(0);
      else
	goto l;
   }

 getch();
 closegraph();
}