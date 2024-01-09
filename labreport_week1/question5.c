# include <stdio.h>

int main() {
    float grade;

    printf("Enter your final grade: ");
    scanf("%f", &grade );

    if (grade > 100) {
        printf("Invaild number!!");
    }
    else if (grade >= 80 && grade <= 100) {
        printf("passed in distinction!!");
    }
    else if (grade >= 60 && grade < 80) {
        printf("Passed in first division!!");
    }
    else if (grade >= 50 && grade < 60) {
        printf("passed in second division!!");
    }
    else if (grade >= 40 && grade < 50) {
        printf("Passed in Third division!!");
    }
    else if (grade >= 0 && grade < 40) {
        printf("You failled!!");
    }
    else {
        printf("Invaild number!!");
    }
    return 0;

}