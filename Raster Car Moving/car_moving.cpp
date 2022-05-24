#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm,NULL);
for (int i = 0; i <= 600; i++) {
    line(0,300,640,300);
    circle(100,285,15);
    circle(200,285,15);
    circle(100,285,5);
    circle(200,285,5);
    line(65+i,285,85+i,285);
    line(115+i,285,185+i,285);
    line(215+i,285,235+i,285);
    line(65+i,285,65+i,260);
    line(235+i,285,235+i,260);
    line(65+i,260,100+i,255);
    line(235+i,260,200+i,255);
    line(100+i,255,115+i,235);
    line(200+i,255,185+i,235);
    line(115+i,235,185+i,235);
    line(179+i,238,152+i,238);
    line(179+i,255,152+i,255);
    line(152+i,255,152+i,238);
    delay(10);
    if (i != 600)
        cleardevice();
}

getch();
closegraph();
return 0;
}

