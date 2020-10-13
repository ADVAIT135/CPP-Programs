#include<iostream>
#include<graphics.h>


main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"c:/turboc3/bgi");
	circle(150,250,50);
	getch();
}
