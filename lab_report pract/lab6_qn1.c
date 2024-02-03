#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int salary;
};

int main() {
    struct Student s[3];

    printf("Enter the information of your student: \n");
    for (int i=0;i<3;i++) {
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Age: ");
        scanf("%d",&s[i].age);
        printf("Salary: ");
        scanf("%d",&s[i].salary);
        printf("\n");
    }
    
    FILE* file= fopen("/home/samyogkoirala/Documents/Course/Third semester/C/C-program git/lab_report pract/try.txt","w");

    if (file == NULL) {
        printf("Error while loading data!");
        return 1;
    }

    for (int i=0;i<3;i++) {
        fprintf(file,"Name: %s",s[i].name);
        fprintf(file,"Age: %d",s[i].age);
        fprintf(file,"Salary: %d",s[i].salary);
    }

    fclose(file);
    return 0;
}