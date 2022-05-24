#include<bits/stdc++.h>
#include <graphics.h>

using namespace std;
void bresenhamsLine(int x0, int y0, int x1, int y1){
    if(x1<x0){
        swap(x0,x1);
        swap(y0,y1);
    }
    int dx = abs(x1-x0);
    int dy = abs(y1-y0);
    int p = 2*dy - dx;
    int x, y=y0;
    for(x = x0; x <= x1; x++){
        putpixel(x, y, WHITE);
        if (p < 0) p += 2*dy;
        else{
            y++;
            p += 2*(dy-dx);
        }
    }
}

int main() {
    int gd = DETECT, gm = DETECT;
    initgraph(&gd,&gm,"");
    int x0, x1, y0, y1;

    printf("Enter co-ordinates of first point: ");
    scanf("%d%d", &x0, &y0);
    printf("Enter co-ordinates of second point: ");
    scanf("%d%d", &x1, &y1);

    bresenhamsLine(x0, y0, x1, y1);
    getch();
    closegraph();
    return 0;
}

