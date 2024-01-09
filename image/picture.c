# include <stdio.h>
# include "lodepng.h"
# include <stdlib.h>

int main() {
    unsigned char* image;
    unsigned int width, height;
    lodepng_decode32_file(&image,&width,&height,"test1.png");
    printf("Image width: %d, height: %d", width, height);
    free(image);
    return 0;
}