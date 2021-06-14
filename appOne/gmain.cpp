#define _カーブ_

#ifdef _三角関数_
#include"libOne.h"
void gmain() {
    window(1000, 1000);
   
    let x, y, r, deg = 0;
    angleMode(DEGREES);
    
    while (notQuit) {
        if (isPress(KEY_W))deg++;
        if (isPress(KEY_S))deg--;
        if (isTrigger(KEY_A))deg += 30;
        if (isTrigger(KEY_D))deg -= 30;
        if(isTrigger(KEY_SPACE))deg = 0;

        x = cos(deg);
        y = sin(deg);
        r = sqrt(x * x + y * y);
            
        clear(224, 225, 204);
        mathAxis(1.2);

        strokeWeight(5);
        stroke(31, 30, 51);
        mathLine(0, 0, x, y);

        mathLine(0, 0, x, 0);

        mathLine(x, 0, x, y);

        textSize(20);
        fill(31, 30, 51);
        text("cos(" + deg +")=" + x, 0, 20);
        text("sin(" + deg +")=" + y, 0, 50);
        text("r=" + r, 0, 80);

    }
}
#endif

#ifdef _カーブ_
#include"libOne.h"
void gmain() {
    window(1000, 1000);

    let x = 0, y = 0, deg = -360;
    angleMode(DEGREES);
    clear(224, 225, 204);
    int stopFlag = 1;

    while (notQuit) {
        if (isTrigger(KEY_SPACE))stopFlag = -stopFlag;
        if (stopFlag == 1) deg++;
        else deg = deg;
        
       
      
        if (deg > 360) {
            deg = -360;
            clear(224, 225, 204);
        }
        x = cos(deg)*100;
        y = sin(deg)*100;
        mathAxis(380);

        strokeWeight(5);
        stroke(100, 100, 255);
        mathPoint(deg, y); 
        stroke(160, 255, 255);
        mathPoint(deg, x);
    }
}
#endif