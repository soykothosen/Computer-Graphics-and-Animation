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

    int x1,y1,x2, y2,c,y_main;

    float m;

    printf("Please Enter First Point: ");
    scanf("%d%d",&x1,&y1);
    printf("Please Enter Second Point: ");
    scanf("%d%d",&x2,&y2);
    printf("Please Enter Value of C: ");
    scanf("%d",&c);


    m = (y2-y1)/(x2-x1);

    printf("m is %d",m);


    for(int i = x1; i<x2; i++){

        y_main = m*i + c;

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

