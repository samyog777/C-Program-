#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

void main(){
	unsigned char *Image;
	unsigned int width, height,red,green,blue,alpha;
	int i,j;
	unsigned int error;
	error=lodepng_decode32_file(&Image,&width,&height,"unnamed.png");
	if(error){
		printf("Error opening a file %d :%s",error,lodepng_error_text(error));
	}
	printf("Width:%d height:%d\n",width,height);
	for(i=0;i<height;i++){
		for(j=0;j<width;j++){
			red=Image[4*width*i+4*j+0];
			green=Image[4*width*i+4*j+1];
			blue=Image[4*width*i+4*j+2];
			alpha=Image[4*width*i+4*j+3];
			red=255-red;
			green=255-green;
			blue=255-blue;
			Image[4*width*i+4*j+0]=red;
			Image[4*width*i+4*j+1]=green;
			Image[4*width*i+4*j+2]=blue;
			printf("[%d %d %d %d]",red,green,blue,alpha);
		}
		printf("\n");
	}
	unsigned char *png;
	size_t pngsize;
	error=lodepng_encode32(&png,&pngsize,Image,width,height);
	if(!error){
		lodepng_save_file(png,pngsize,"negative.png");
	}
	free(Image);
	free(png);
}