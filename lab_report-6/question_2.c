#include <stdio.h>

struct Employee {
    char empName[50];
    int age;
    float salary;
};

int main() {
    FILE* file = fopen("D:\\employee.txt", "r");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    struct Employee employees[3];

    // Read employee information from the file
    for (int i = 0; i < 3; ++i) {
        fscanf(file, "Employee %*d\n"); // Skip the line "Employee i"
        fscanf(file, "Name: %s\n", employees[i].empName);
        fscanf(file, "Age: %d\n", &employees[i].age);
        fscanf(file, "Salary: %f\n\n", &employees[i].salary);
    }

    // Close the file
    fclose(file);

    // Display employee information
    printf("Employee Information:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", employees[i].empName);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }

    return 0;
}
