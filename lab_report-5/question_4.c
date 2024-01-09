#include <stdio.h>

// Define a structure for student_info
struct Student_info {
    char name[50];
    int age;
    char dob[20];
};

// Define a structure for Student that includes Student_info
struct Student {
    int rollNo;
    float marks;
    struct Student_info info; // Nested structure
};

int main() {
    // Create an array of Student to store information for 3 students
    struct Student students[3];

    // Input information for 3 students
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Name: ");
        scanf("%s", students[i].info.name);
        printf("Age: ");
        scanf("%d", &students[i].info.age);
        printf("Date of Birth (dd/mm/yyyy): ");
        scanf("%s", students[i].info.dob);
    }

    // Display information for 3 students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; ++i) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Name: %s\n", students[i].info.name);
        printf("Age: %d\n", students[i].info.age);
        printf("Date of Birth: %s\n", students[i].info.dob);
    }

    return 0;
}
