#include<stdio.h>
void main(){
FILE *f1, *f2;
f1 = fopen("a.txt", "r");
f2 = fopen("b.txt", "r");
fclose(f1,f2);
}