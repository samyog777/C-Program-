#include<stdio.h>
#include<string.h>
typedef struct Student{
int roll;
char name[30];
float marks;
} student;
void main(){
student s[5]={{1,"Alice",55},{33,"Bob",40},{2,"Harry",99},{4,"Ram",30},{5,"Sita",80}};
student *ptr;
ptr = &s[0];
int i;
ptr++;
printf("%f",ptr->marks);
}