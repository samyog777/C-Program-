#include<stdio.h>
#include<string.h>
typedef struct Student{
int roll;
char name[30];
float marks;
} student;
void main(){
student s[5]={{1,"Alice",55},{33,"Bob",40},{2,"Harry",99},{4,"Ram",30}};
student *ptr;
ptr = &s[3];
int i;
printf("%f",ptr->marks);
}