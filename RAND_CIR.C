#include <conio.h>
#include <stdio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
int main ()
{
	int gd = DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	for(i=0;i<=300;i++)
	{
		setcolor(rand()%10);
		circle(rand()%1000,rand()%600,rand()%10);
		delay(20);
	}
	getch();
	return 0;

}