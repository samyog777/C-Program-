#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Number %d is bigger than %d", a, b);
    } else {
        printf("Number %d is bigger than %d", b, a);
    }

    return 0;
}
