# include <stdio.h>

void midpoint_coordinates (float x1, float y1, float x2, float y2) {
    float xmid = (x1+x2)/2 ;
    float ymid=(y1+y2)/2 ; 
    printf ("the midpoint of x is: %f \n", xmid);
    printf("the midpoint of y is: %f", ymid);
}

int main() {
    float x1, y1, x2, y2 ;

    printf("Enter x1: ");
    scanf("%f",&x1);

    printf("Enter y1: ");
    scanf("%f",&y1);

    printf("Enter x2: ");
    scanf("%f",&x2);

    printf("Enter y2: ");
    scanf("%f",&y2);

    midpoint_coordinates(x1, y1, x2, y2);
    return 0;
}