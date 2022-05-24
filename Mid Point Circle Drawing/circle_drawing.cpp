#include <bits/stdc++.h>
#include <graphics.h>

void plotpixel(int xc, int yc, int x, int y){
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc-y, yc+x, WHITE);
    putpixel(xc-y, yc-x, WHITE);
    putpixel(xc-x, yc-y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc+y, yc-x, WHITE);
    putpixel(xc+y, yc+x, WHITE);
}

void midpointCircle(int xc, int yc, int r){
    int p, x, y;
    p = 1-r;
    x = 0;
    y = r;
    plotpixel(xc, yc, x, y);
    
    while(x < y){
        plotpixel(xc, yc, x, y);
        if(p < 0){
            p += 2*x + 1;
        }
        else{
            y--;
            p += 2*x + 1 - 2*y;
        }
        delay(1);
        x++;
    }
}

int main() {
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");
    int r, xc, yc;

    printf("Enter radius of circle: ");
    scanf("%d", &r);
    printf("Enter co-ordinates of center(x and y): ");
    scanf("%d%d", &xc, &yc);

    midpointCircle(xc, yc, r);
    getch();
    closegraph();
    return 0;
}
