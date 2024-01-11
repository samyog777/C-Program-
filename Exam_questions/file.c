#include <stdio.h>

int main() {
    FILE *fptr;
    char a, b, c;
    fptr = fopen("/home/samyog/Documents/Third semester/C/C program/Exam_questions/test.txt","r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit the program indicating error
    }
    a = fgetc(fptr);
    b = fgetc(fptr);
    c = fgetc(fptr);
    printf("%c%c%c\n", a, b, c);
    fclose(fptr);
    return 0; // Indicates successful execution
}
