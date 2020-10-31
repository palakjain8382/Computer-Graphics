#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
 int gd = DETECT, gm,i;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 //base
 setcolor(6);
 setfillstyle(1,6);                              //ORANGE FILL
	rectangle(100,170,300,240);
 floodfill(101,172,6);

 setcolor(0);
 setfillstyle(0,0);                              //BLACK FILL
	 rectangle(150,185,220,205);
 floodfill(151,186,0);

 //BORDER REC
 setcolor(15);
 rectangle(100,170,300,240);

 //light
 setcolor(15);
	 line(300,170,360,142);
	 line(300,240,360,268);

 //yellow light
 setcolor(YELLOW);
 setfillstyle(1,YELLOW);
	 ellipse(362,205,0,360,14,64);
 floodfill(364,200,YELLOW);

 setcolor(6);
	for(i=0;i<3;i++){
		 ellipse(362,205,0,360,14,64-i);
	}

 getch();
 closegraph();
}