#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        float vx = -3;
        float mag = vx < 0 ? -vx : vx;
        //if(vx < 0) { mag = -vx; }
        //else { mag = vx; }
        clear(200);
        mathAxis(5.1f);
        strokeWeight(10);
        mathArrow(0, 0, vx, 0);
        textSize(50);
        text(vx, 0, 50);
        text(mag, 0, 100);

    }
}
