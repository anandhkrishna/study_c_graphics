#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int i;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");

	for(i=0;i<200;i++)
	{
		cleardevice();
		arc(getmaxx()/2,getmaxy()/2,0,180,i);
		arc(getmaxx()/2,getmaxy()/2,180,0,i);
		delay(30);
	}
	getch();
	return 0;
}