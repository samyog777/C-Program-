#include <stdio.h>
struct student
{
int no;
int age;
};
void main()
{
struct student s= {15, 20};
printf("%d, %d", s.no, s.age);
}