#include <stdio.h>
int main(){
    FILE *fp;
    char *str;
    fp=fopen("demo.txt","r");
    while(fgets(str,6,fp)!=NULL) {
        puts(str);
    }
    fclose(fp);
    return 0;
}