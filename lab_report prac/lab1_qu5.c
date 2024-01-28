#include <stdio.h>

int main() {
    float score;
    printf("Enter your score of final exam: ");
    scanf("%f",&score);

    if (score > 100) {
        printf("Too much value");
    } else if (score <=100 && score >=70) {
        printf("You passed with A grade");
    } else if (score <70 && score >=60) {
        printf("You passed with B grade");
    } else if (score <60 && score >=50) {
        printf("You passed with C grade");
    } else if (score <50 && score >=40) {
        printf("You passed with D grade");
    } else {
        printf("You failed");
    }

    return 0;
}

