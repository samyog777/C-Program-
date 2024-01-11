#include <stdio.h>
void main(){
FILE *fp;
fp = fopen("test.txt", "w");
fprintf(fp, "ABC");
fclose(fp);
fp = fopen("test.txt", "r");
char ch = fgetc(fp);
while (!feof(fp)){
printf("%c", ch);
ch = fgetc(fp);
}
}