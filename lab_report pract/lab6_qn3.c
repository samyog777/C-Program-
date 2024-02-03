#include <stdio.h>

struct Student{
    char name[50];
    int age;
    int salary;
};

int main() {
    struct Student s[3];

    FILE* file = fopen("/home/samyogkoirala/Documents/Course/Third semester/C/C-program git/lab_report pract/try.txt","a");
    if (file == NULL) {
        printf("Cannot open the file");
        return 1;
    }

    for (int i=0;i<3;i++) {
        printf("Enter the information for the employee %d",i+1);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Age: ");
        scanf("%d",&s[i].age);
        printf("Salary: ");
        scanf("%d",&s[i].salary);
        fprintf(file,"Name: %s\n",s[i].name);
        fprintf(file,"Age: %d\n",s[i].age);
        fprintf(file,"Salary: %d\n\n",s[i].salary);
    }
    fclose(file);
    return 0;
}

