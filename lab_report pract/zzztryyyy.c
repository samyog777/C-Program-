#include <stdio.h>

struct Employee {
    char empName[50];
    int age;
    int salary;
};

int main() {
    FILE* file = fopen("/home/samyogkoirala/Documents/Course/Third semester/C/C-program git/lab_report pract/try.txt", "r");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    struct Employee employees[3];

    // Read employee information from the file
    for (int i = 0; i < 3; ++i) {
        fscanf(file, "Name: %s\n", employees[i].empName);
        fscanf(file, "Age: %d\n", &employees[i].age);
        fscanf(file, "Salary: %d\n\n", &employees[i].salary);
    }

    // Close the file
    fclose(file);

    // Display employee information
    for (int i = 0; i < 3; ++i) {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", employees[i].empName);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %d\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
