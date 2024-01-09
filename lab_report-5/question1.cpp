#include <iostream>
#include <string>
using namespace std;

// Define the structure for an employee
struct Employee {
    string name;
    string post;
    float salary;
};

// Function to filter employees with salary greater than 10,000
Employee* filterEmployees(Employee employees[], int size, int& newSize) {
    Employee* highSalaryEmployees = new Employee[size]; // Creating a new array to hold filtered employees
    newSize = 0; // Initialize the new size for the filtered array

    for (int i = 0; i < size; ++i) {
        if (employees[i].salary > 10000) {
            highSalaryEmployees[newSize] = employees[i];
            newSize++;
        }
    }

    return highSalaryEmployees;
}

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];

    // Input information for employees from the main function
    cout << "Enter information for " << numEmployees << " employees:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore(); // Ignore any leftover newline characters
        getline(cin, employees[i].name);
        cout << "Post: ";
        getline(cin, employees[i].post);
        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    int newSize = 0;
    Employee* filteredEmployees = filterEmployees(employees, numEmployees, newSize);

    // Displaying modified records of employees with salary greater than 10,000
    cout << "\nEmployees with salary greater than 10,000:" << endl;
    for (int i = 0; i < newSize; ++i) {
        cout << "Name: " << filteredEmployees[i].name << endl;
        cout << "Post: " << filteredEmployees[i].post << endl;
        cout << "Salary: " << filteredEmployees[i].salary << endl;
        cout << endl;
    }

    // Free memory allocated for filteredEmployees
    delete[] filteredEmployees;

    return 0;
}
