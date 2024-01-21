#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

int main() {
    unsigned char *image;
    unsigned int width,height,red,blue,green,alpha;
    lodepng_decode32_file(&image,&width,&height,"xyz.png");
    int row,col;
    for (row=0;row<height;row++) {
        for (col=0;col<width;col++) {
            red = image[4*width*row+4*col+0];
            green = image[4*width*row+4*col+1];
            blue = image[4*width*row+4*col+2];
            alpha = image[4*width*row+4*col+3];
            printf("\n[%d %d %d %d]\n", red, green, blue, alpha);
        }
    }
    free(image);
    return 0;
}
