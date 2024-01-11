#include <stdio.h>
#include <string.h>
struct student
{
char name[4];
};
void main()
{
struct student s, m;
strcpy(s.name,"IT");
m = s;
printf("%s, %s", s.name, m.name);
}
