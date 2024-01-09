# include <stdio.h>

void midpoints (float x1, float y1, float x2, float y2) {
    float xmid, ymid;
    xmid = (x1+x2)/2;
    ymid = (y1+y2)/2;
    printf("The midpoint coordinates of a line x is: %f", xmid);
    printf("The midpoint coordinates of a line y is: %f", ymid);
}

int main() {
    float x1, y1, x2, y2;
    printf("Enter the x1 y1 x2 and y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    midpoints(x1, y1, x2, y2);
    return 0;
}