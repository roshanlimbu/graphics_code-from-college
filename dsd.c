#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void blaline(int x1,int y1,int x2,int y2,int col)
{
	int dx,dy,p,a,t;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(((x2-x1)<0 && (y2-y1)>0) ||((x2-x1)>0 &&(y2-y1)<0))
	{
	a=-1;
	}
	else
	{
	a=1;
	}
	if(dy<dx)
	{
		if(x1>x2)
		{
		t=x1;
		x1=x2;x2=t;
		t=y1;y1=y2;y2=t;
		}
		p=2*dy-dx;
		putpixel(x1,y1,col);
		while(x1<=x2)
		{
			if(p<0)
			{
			x1=x1+1;
			p=p+2*dy;
			}
			else
			{
			x1=x1+1;
			y1=y1+a;
			p=p+2*dy-2*dx;
			}
			delay(10);
			putpixel(x1,y1,col);

		}

	}
	else
	{

		if(y1>y2)
		{
		t=x1;x1=x2;x2=t;
		t=y1;y1=y2;y2=t;
		}
		p=2*dx-dy;
		putpixel(x1,y1,col);
		while(y1<=y2)
		{
			if(p<0)
			{
			p=p+2*dx;
			y1=y1+1;
			}
			else
			{
			x1=x1+a;
			y1=y1+1;
			p=p+2*dx-2*dy;

			}
			delay(10);
			putpixel(x1,y1,col);
		}
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");

	printf("%u %u ",getmaxx(),getmaxy());
	blaline(0,0,639,479,2);
	blaline(0,479,639,0,5);
	blaline(0,0,0,479,6);
	blaline(0,0,639,0,5);
	blaline(0,240,639,240,3);
	blaline(320,0,320,479,9);
	blaline(0,479,639,479,7);
	blaline(639,0,639,479,8);

       getch();
}
