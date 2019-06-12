#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	settextstyle(GOTHIC_FONT,0,4);
	outtextxy(230,250,"welcome to c");
	getch();
	return 0;
}