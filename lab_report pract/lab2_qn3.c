#include <stdio.h>

float midPoints(float x1,float x2,float y1,float y2);
float midPoints(float x1,float x2,float y1,float y2) {
    float xmid = (x1+x2)/2;
    float ymid = (y1+y2)/2;
    printf("The midpoint of x is: %f\n",xmid);
    printf("The midpoint of y is: %f",ymid);
    return 0.0;
}

int main() {
    float x1,x2,y1,y2;
    printf("Enter x1, x2, y1 and y2: ");
    scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
    midPoints(x1,x2,y1,y2);
}