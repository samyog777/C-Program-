# include <stdio.h>
# include "lodepng.h"
# include <stdlib.h>

int main() {
    unsigned char *Image, *png;
    unsigned int width,height,error,red,green,blue,alpha,i,j;
    error = lodepng_decode32_file(&Image,&width,&height,"unnamed.png");
    if (error) {
        printf("The error %d occor: %s",error,lodepng_error_text(error));
    }
    printf("Width: %d \n Height: %d",width,height);
    for (i=0;i<height;i++) {
        for (j=0; j<width;j++) {
            red = Image[4*width*i+4*j+0];
            green = Image[4*width*i+4*j+1];
            blue = Image[4*width*i+4*j+2];
            alpha = Image[4*width*i+4*j+3];
            red = 255-red;
            green = 255-green;
            blue = 255-blue;
            Image[4*width*i+4*j+0] = red;
            Image[4*width*i+4*j+1] = green;
            Image[4*width*i+4*j+2] = blue;
            printf("red: %d Green: %d Blue: %d alpha: %d",red,green,blue,alpha);
        }
        printf("\n");
    }
    size_t pngsize;
    error = lodepng_encode32(&png,&pngsize,Image,width,height);
    if(!error) {
        lodepng_save_file(png,pngsize,"output.png");
    }
    free(Image);
    free(png);
    return 0;
}



