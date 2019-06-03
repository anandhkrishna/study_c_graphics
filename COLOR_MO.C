#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int i,j,k;
	int gd=DETECT ,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	i=rand()%600;
	j=rand()%500;
	k=rand()%50;
	for(i=0;i<=500;i++)
	{
		circle(i,j,k);
		setfillstyle(1,RED);
		floodfill(i+1,i+1,WHITE);
		delay(50);
		cleardevice();

	}
	getch();
	return 0;
}
