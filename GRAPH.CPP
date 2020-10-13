#include<iostream>
#include<graphics>
#include<conio>

main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"c:/turboc3/bgi");
	circle(150,250,50);
	getch();
}
