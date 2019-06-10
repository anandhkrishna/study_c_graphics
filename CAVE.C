#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	for(i=30;i<300;i++)
	{
		delay(5);
		setcolor(i/10);
		arc(i-10,i-10,0,180,i-20);
	}
	getch();
	return 0;
}
