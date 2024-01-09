#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for an employee
struct Employee {
    char name[50];
    char post[50];
    float salary;
};

// Function to filter employees with salary greater than 10,000
struct Employee* filterEmployees(struct Employee employees[], int size, int* newSize) {
    struct Employee* highSalaryEmployees = (struct Employee*)malloc(size * sizeof(struct Employee));
    *newSize = 0; // Initialize the new size for the filtered array

    for (int i = 0; i < size; ++i) {
        if (employees[i].salary > 10000) {
            highSalaryEmployees[*newSize] = employees[i];
            (*newSize)++;
        }
    }

    return highSalaryEmployees;
}

int main() {
    const int numEmployees = 10;
    struct Employee employees[numEmployees];

    // Input information for employees from the main function
    printf("Enter information for %d employees:\n", numEmployees);
    for (int i = 0; i < numEmployees; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Post: ");
        scanf("%s", employees[i].post);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    int newSize = 0;
    struct Employee* filteredEmployees = filterEmployees(employees, numEmployees, &newSize);

    // Displaying modified records of employees with salary greater than 10,000
    printf("\nEmployees with salary greater than 10,000:\n");
    for (int i = 0; i < newSize; ++i) {
        printf("Name: %s\n", filteredEmployees[i].name);
        printf("Post: %s\n", filteredEmployees[i].post);
        printf("Salary: %.2f\n\n", filteredEmployees[i].salary);
    }

    // Free memory allocated for filteredEmployees
    free(filteredEmployees);

    return 0;
}
