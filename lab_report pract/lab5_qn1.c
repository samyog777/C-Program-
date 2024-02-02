#include <stdio.h>

struct Student {
    char name[10];
    int rollNo;
    float marks;
};

void TakeStudentInfo(struct Student student[],int size) {
    for (int i=0; i<size;i++) {
        printf("Enter the value for student %d\n",i+1);
        printf("Enter the name: ");
        scanf("%s",student[i].name);
        printf("Enter the rollno: ");
        scanf("%d",&student[i].rollNo);
        printf("Enter the marks of the student: ");
        scanf("%f",&student[i].marks);
        printf("\n");
    }
}

void displayStudentinfo(struct Student student[], int size) {
    for (int i=0;i<size;i++) {
        printf("The value of struct student is: ");
        printf("Name: %s\n",student[i].name);
        printf("Roll number: %d\n",student[i].rollNo);
        printf("Marks: %f\n",student[i].marks);
        printf("\n");
    }
}

int main() {
    struct Student student[2];

    TakeStudentInfo(student,2);

    displayStudentinfo(student,2);

    return 0;
}


