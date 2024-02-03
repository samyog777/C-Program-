#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int salary;
};

int main() {

    FILE* file = fopen("/home/samyogkoirala/Documents/Course/Third semester/C/C-program git/lab_report pract/try.txt","r");

    if (file == NULL) {
        printf("Error while opening file!");
        return 1;
    }

    struct Student s[4];
    
    printf("The information of the student are: \n");
    for (int i =0;i<4;i++) {
        fscanf(file,"Name: %s\n",s[i].name);
        fscanf(file,"Age: %d\n",&s[i].age);
        fscanf(file,"Salary: %d\n",&s[i].salary);
        printf("Name: %s\n",s[i].name);
        printf("Age: %d\n",s[i].age);
        printf("Salary: %d\n",s[i].salary);
        printf("\n");
    }
    fclose(file);
    return 0;
}