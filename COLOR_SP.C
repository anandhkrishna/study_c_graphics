#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int x,y;
	int j=0;
	float i=0.1;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	x=getmaxx()%2;
	y=getmaxx()%2;
	while(!kbhit())
	{
		setcolor(rand()%16);
		arc(x,y,1+j,2+j,i+=0.1);
		delay(10);
		j++;
	}
	getch();
	return 0;
}