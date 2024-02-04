#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

int main() {
    unsigned char *image, *png;
    unsigned int width,height,error,red,blue,gree,alpha;

    if (error) {
        printf("The error %d occor: %s",error,lodepng_error_text(error));
    }

    printf("Width: %d\n Height: %d",width,height);
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            red = Image[4*width*i+4*j+0];
            blue = Image[4*width*i+4*j+1];
            green = Image[4*width*i+4*j+2];
            aplpha = Image[4*width*i+4*j+3];
        }
    }
}