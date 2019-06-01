#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int i;
	int gd = DETECT ,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	for(i=0;i<30;i++)
	{
		setcolor(rand()%10);
		rectangle(rand()%1000,rand()%600,rand()%900,rand()%400);

		delay(100);
	}
	getch();
	return 0;
}

