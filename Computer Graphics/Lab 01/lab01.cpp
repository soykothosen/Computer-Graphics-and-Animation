#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

//driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file

    int gd = DETECT, gm;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm,"");

    int x1=0,y1=0,x2=100,y2=200, c = 5;


    float m;

    int y_main;

    m = (y2-y1)/(x2-x1);

    for(int i = x1; i<x2; i++){

        y_main = m*x1 + c;

        putpixel(i,y_main,3);

    }



        getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}

