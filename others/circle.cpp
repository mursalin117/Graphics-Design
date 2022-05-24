// C code to illustrate using
// graphics in linux environment

#include "graphics.h"

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    circle(50, 50, 30);
    getch();

//    delay(500000);
    closegraph();
    return 0;
}
