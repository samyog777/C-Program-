#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    float salary;
    int hoursWorked;
};

void printHighestSalary(struct Employee* employees, int n) {
    if (n <= 0) {
        printf("Invalid number of employees.\n");
        return;
    }

    float maxSalary = employees[0].salary;
    for (int i = 1; i < n; ++i) {
        if (employees[i].salary > maxSalary) {
            maxSalary = employees[i].salary;
        }
    }

    printf("The highest salary among the employees is: $%.2f\n", maxSalary);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    struct Employee* employees = (struct Employee*)malloc(n * sizeof(struct Employee));
    if (employees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input information for 'n' employees
    for (int i = 0; i < n; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours worked per day: ");
        scanf("%d", &employees[i].hoursWorked);
    }

    // Print the highest salary among employees
    printHighestSalary(employees, n);

    free(employees); // Free dynamically allocated memory

    return 0;
}
