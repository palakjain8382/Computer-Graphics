#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
 int gd = DETECT, gm,i,x,j,l,c;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 printf("\n\nPRESS N TO EXIT");
 printf("\n\n PRESS ANY KEY TO CONTINUE...");

 getch();

  for(i=5;i>0;i--)
  {    cleardevice();
	printf("%d",i);
	delay(800);
  }
l : for(i=1;i!=0;i++){
x=0;
 for(j=0;j<200;j++)
   {
     setcolor(15);
 setfillstyle(15,6);
	 rectangle(250,60,350,90);
 floodfill(251,61,15);
	setcolor(6);
		 line(300,75,200+x,200);

	  setcolor(6);
	  setfillstyle(1,6);
		 circle(200+x,200,20);
	 floodfill(201+x,201,6);
	 x++;
	 cleardevice();
	 delay(5);
   }
   x=0;
     for(j=0;j<200;j++)
   {
     setcolor(15);
 setfillstyle(15,6);
	 rectangle(250,60,350,90);
 floodfill(251,61,15);
	setcolor(6);
		 line(300,75,400-x,200);

	  setcolor(6);
	  setfillstyle(1,6);
		 circle(400-x,200,20);
	 floodfill(399-x,201,6);
	 x++;
	 cleardevice();
	 delay(5);
     }
       c=getch();
     if(c=='n'||c=='N')
	exit(0);
     else
	goto l;
 }
/*
       setcolor(15);
 setfillstyle(15,6);
	 rectangle(250,60,350,90);
 floodfill(251,61,15);
	setcolor(6);
		 line(300,75,200,200);

	  setcolor(6);
	  setfillstyle(1,6);
		 circle(200,200,20);
	 floodfill(201,201,6);

  */
 getch();
 closegraph();
}