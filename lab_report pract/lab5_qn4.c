#include <stdio.h>
struct studentinfo {
    char name[50];
    int age;
    char date_of_birth[20];
};

struct Student {
    int rollno;
    int marks;
    struct studentinfo info;
};

int main() {
    struct Student s[2];

    for (int i=0;i<2;i++) {
        printf("Enter information for student %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",s[i].info.name);
        printf("Enter age: ");
        scanf("%d",&s[i].info.age);
        printf("Enter date of birth: ");
        scanf("%s",s[i].info.date_of_birth);

        printf("Enter rollno: ");
        scanf("%d",&s[i].rollno);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
    }

    printf("Student's Information: \n");
    for (int i=0;i<2;i++) {
        printf("Name: %s\n",s[i].info.name);
        printf("Age: %d\n",s[i].info.age);
        printf("Date of birth: %s\n",s[i].info.date_of_birth);
        printf("Roll no: %d\n",s[i].rollno);
        printf("Marks: %d\n",s[i].marks);
    }
    return 0;
}