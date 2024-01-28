#include <stdio.h>

void midpoints(float x1, float x2, float y1, float y2);

int main() {
    float x1,x2,y1,y2;
    printf("Enter x1, x2 ,y1 and y2: ");
    scanf("%f %f %f %f",&x1, &x2, &y1, &y2);
    midpoints(x1,x2,y1,y2);

}

void midpoints(float x1,float x2,float y1,float y2) {
    float x_midpoints = (x1+x2)/2;
    float y_midpoints = (y1+y2)/2;

    printf("The mid points of x parameter is: %f\n",x_midpoints);
    printf("The mid points of y parameter is: %f",y_midpoints);
}
