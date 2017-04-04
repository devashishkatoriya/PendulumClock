
//C++ Program to Show a Swinging Pendulum Clock

/*
 * In this program we pass the Angle(small value) from main() to display()
 * display() then draws the whole Clock and its Pendulum
 */

#include <iostream>
#include <math.h>                           //for sin() and cos()
#include <graphics.h>

using namespace std;

int X1=300,Y1=180,x,y;

void display(double i)
{
    setcolor(GREEN);
    circle(300,130,50);

    setcolor(RED);
    line(210,60,210,320);
    line(210,60,390,60);                //for drawing clock
    line(390,60,390,320);
    line(210,320,390,320);
    line(300,130,300,98);
    line(300,98,297,101);
    line(300,98,303,101);
    line(337,130,300,130);
    line(337,130,334,127);
    line(337,130,334,133);

    outtextxy(295,88,"12");
    outtextxy(260,130,"9");                 //showing the time labels
    outtextxy(340,130,"3");
    outtextxy(295,168,"6");


    setcolor(GREEN);
    x = X1 + 90 * cos(i);                   //drawing the pendulum and its circle
    y = Y1 + 90 * sin(i);                   //as the sin and cos values are very small, we multiply it with 90(or any other number)
    line(X1,Y1,x,y);
    circle(x,y,10);

    delay(30);
    cleardevice();                          //at last clear the device to draw again the clock with updated pendulum angle
}

int main()
{
    int gd=DETECT,gm,j;
    double i;
    initgraph(&gd,&gm,NULL);

    for(j=0;j<50;j++)                       //outer loop to draw the clock repeatedly
    {
        for(i=2;i>1;i=i-0.01)
            display(i);                     //Two inner loops for passing the angle to display()
        for(i=1;i<2;i=i+0.01)               //first one for left to right swing
            display(i);                     //second one for right to left swing
    }

    delay(15000);
    closegraph();
    cout<<"\nThank you for using this program :)\n\n";
    return 0;
}