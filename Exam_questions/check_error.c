#include<stdio.h>
struct data{
int lower = 0;
int upper = 3;
}range;
void main(){
int i;
int s = 0;
for(i=range.lower;i<=range.upper;i++){
s = s + i;
printf("%d,",s);
}
}