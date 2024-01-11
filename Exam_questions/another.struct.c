#include<stdio.h>
typedef struct {
char name[20];
float salary;
}emp;
void main(){
emp e[5] = {{"Bob",50000},{"Alice",25000},{"Robin",5000}};
emp *p;
p = &e[0];
p = p+1;
printf("%s",p->name);
}