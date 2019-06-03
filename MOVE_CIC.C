#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int i;
	int gd = DETECT ,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	setcolor(GREEN);

	for(i=0;i<550;i++)
	{
		circle(i,400,20);
		delay(2);
		cleardevice();
	}
	for(i=400;i>=10;i--)
	{
		circle(550,i,20);
		delay(2);

		cleardevice();
	}
	for(i=550;i>=20;i--)
	{
		circle(i,10,20);
		delay(2);
		cleardevice();
	}
	for(i=20;i<550;i++)
	{
		circle(20,i,20);
		delay(2);
		cleardevice();
	}
	getch();
	return 0;
}