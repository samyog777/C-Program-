# include <stdio.h>

int main() {
    float marks;
    printf("Enter your marks in percentage: ");
    scanf("%f",&marks);

    if (marks > 100) {
        printf("Wrong input");
    } else if (marks >= 40) {
        printf("You passed");
    } else {
        printf("You failed");
    }
    return 0;
}
