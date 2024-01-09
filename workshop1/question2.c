#include <stdio.h> 

void main() {
    int i, a, factorial = 1;

    printf("Enter number to find its factorial: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("there is no factorial of 0");
    }
    else {
        for (i = 1; i <= a; i++){
            factorial *= i;
      }
        printf("%d", factorial);

    }
}


