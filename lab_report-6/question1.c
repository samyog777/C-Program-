#include <stdio.h>

struct Employee {
    char empName[50];
    int age;
    float salary;
};

int main() {
    struct Employee employees[3];

    // Input information for 3 employees
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].empName);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Open file in write mode on D:\ drive
    FILE* file = fopen("D:\\employee.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Write employee information to the file
    for (int i = 0; i < 3; ++i) {
        fprintf(file, "Employee %d\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].empName);
        fprintf(file, "Age: %d\n", employees[i].age);
        fprintf(file, "Salary: %.2f\n\n", employees[i].salary);
    }

    // Close the file
    fclose(file);
    
    printf("Employee information has been written to D:\\employee.txt\n");

    return 0;
}
