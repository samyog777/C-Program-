#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    int hoursWorked;
};

void adjustSalary(struct Employee* emp) {
    if (emp->hoursWorked >= 12) {
        emp->salary += 150;
    } else if (emp->hoursWorked >= 10) {
        emp->salary += 100;
    } else if (emp->hoursWorked >= 8) {
        emp->salary += 50;
    }
}

int main() {
    struct Employee employees[5];

    // Input information for 5 employees
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours worked per day: ");
        scanf("%d", &employees[i].hoursWorked);
    }

    // Adjust salaries based on hours worked
    for (int i = 0; i < 5; ++i) {
        adjustSalary(&employees[i]);
    }

    // Display employee names and their final salaries
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Name: %s, Final Salary: $%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
