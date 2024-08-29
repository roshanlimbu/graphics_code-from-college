#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void symmetry(int x,int y, int xc,int yc)
{
	putpixel(x+xc,y+yc,1);
	putpixel(-x+xc,y+yc,2);
	putpixel(x+xc,-y+yc,3);
	putpixel(-x+xc,-y+yc,4);
	putpixel(y+xc,x+yc,5);
	putpixel(-y+xc,x+yc,6);
	putpixel(y+xc,-x+yc,7);
	putpixel(-y+xc,-x+yc,8);
}
void mid_circle(int xc, int yc, int r)
{
	int x,y,p;
	x=0;
	y=r;
	p=1-r;
	symmetry(x,y,xc,yc);
	while(x<=y)
	{
		if(p<0)
		{
		p=p+2*x+1;
		x=x+1;

		}
		else
		{
		p=p+2*x-2*y+1;
		x=x+1;
		y=y-1;
		}
		symmetry(x,y,xc,yc);
		delay(100);
	}

}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	mid_circle(getmaxx()/2,getmaxy()/2,100);
	getch();
}

