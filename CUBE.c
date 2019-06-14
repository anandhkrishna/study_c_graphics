#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	bar3d(200,200,300,300,30,3);
	getch();
	return 0;
}