#include <stdio.h>
#include <stdlib.h>
#include <lodepng.h>

int main() {
    unsigned char *Image,*png;
    unsigned int error,height,width,red,blue,gree,alpha;
    error = lodepng_encode32_file(&Image,&height,&width,"something.png");
    if(error) {
        printf("Error %d: %s",error,lodepng_error_text(error));
    }
    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            red = Image[4*width*i+4*j+0];
            greem = Image[4*width*i+4*j+1];
            blue = Image[4*width*i+4*j+2];
            alpha = Image[4*width*i+4*j+3];
            red = 255-red;
            green -=255;
            blue -=255;
            Image[4*width*i+4*j+0] = red;
            Image[4*width*i+4*j+1] = green;
            Image[4*widht*i+4*j+2] = blue;
            printf("%d %d %d %d",red,blue,green,alpha);
        }
        printf("\n");
    }
    size_t pngsize;
    error = lodepng_decode32(&png,&pngsize,Image,height,width);
    if (!error) {
        lodepng_save_file(png,pngsize,"haha.png");
    }
    free(Image);
    free(png);
    return 0;
}