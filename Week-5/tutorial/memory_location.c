# include <stdio.h>

#pragma pack(1)
struct student_info{
    char name[20];
    int rollno;
    char classgroup[10];
    char address[20];
};

int main() {
    struct student_info student;
    printf("Total memory allocated by student: %d",sizeof(student));
    return 0;
}