#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i;
	char name[32];
	int gd = DETECT ,gm;
	printf("enter your nmae :\n");
	scanf("%s",name);
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	for(i=0;i<150;i++)
	{
		setcolor(rand()%20);
		outtextxy(rand()%600,rand()%500,name);
		delay(20);
	}
	getch();
	return 0;
}