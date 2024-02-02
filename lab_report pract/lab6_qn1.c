#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    int salary;
};

int main() {
    struct Employee emp[3];
    for (int i=0; i<3;i++) {
        printf("Enter detail of employee %d\n",i+1);
        printf("Name: ");
        scanf("%s",emp[i].name);
        printf("Age: ");
        scanf("%d",&emp[i].age);
        printf("Salary: ");
        scanf("%d",&emp[i].salary);
    }
    FILE* file = fopen("/home/samyogkoirala/Documents/Course/Third semester/C/C-program git/lab_report pract/try.txt","w");

    if(file == NULL) {
        printf("Unable to open file. \n");
        return 1;
    }

    for (int i=0;i<3;i++) {
        fprintf(file,"Employee %d\n",i+1);
        fprintf(file,"Name: %s \n",emp[i].name);
        fprintf(file,"Age: %d \n",emp[i].age);
        fprintf(file,"Salary: %d \n",emp[i].salary);
        fprintf(file,"/n");
    }
    fclose(file);
    printf("Employee information has been written to d drive");
    return 0;
}