#include <stdio.h>

struct Employee {
    char empName[50];
    int age;
    float salary;
};

int main() {
    FILE* file = fopen("D:\\employee.txt", "a");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    struct Employee newEmployee;
    printf("Enter details for the new employee:\n");
    scanf("%s %d %f", newEmployee.empName, &newEmployee.age, &newEmployee.salary);

    fprintf(file, "Employee\nName: %s\nAge: %d\nSalary: %.2f\n\n", newEmployee.empName, newEmployee.age, newEmployee.salary);
    fclose(file);
    printf("New employee information has been added to D:\\employee.txt\n");

    return 0;
}
