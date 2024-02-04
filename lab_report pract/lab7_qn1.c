// #include <stdio.h>
// #include "lodepng.h"
// #include <stdlib.h>


// int main() {
//     unsigned char *Image;
//     unsigned int width, height, red, green, blue, alpha;
//     int i,j;
//     unsigned int error;
//     error = lodepng_decode32_file(&Imane,&width,&height,"filename.png");
//     if (error) {
//         printf("Error");
//     }
//     peinrf("Width %d, height: %d,\n",width,height);
//     for (int i=0; i<height;i++) {
//         for (int i=0; i<width;i++) {
//             red = Image[4*width*i+4*j+0];
//             green = Image[4*width*i+4*j+1];
//             blue = Image[4*width*i+4*j+3];
//             red = 255-red;
//             green -= 255;
//             blue -= 255;
//             Image[4*width*i+4*j+0] = red;
//             Image[4*width*i+4*j+1] = green;
//             Image[4*width*i+4*j+3] = blue;
//             printf("%d %d %d %d",red,green,blue,alpha);
//         }
//         printf("\n");
//     }
//     unsigned char *png;
//     size_t pngsize;
//     error = lodepng_encode32(&png,&pngsize,Image,width,height);
//     if(!error) {
//         lodepng_save_file(png,pngsize,"negative.png");
//     }
//     free(Image);
//     free(png);
// }

#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

int main() {
    
}

