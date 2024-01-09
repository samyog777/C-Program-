
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Emter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("%d is biggest between %d, %d and %d", a, b ,c, a);

    }

    else if (b > a && b > c) {
        printf("%d is biggest between %d, %d and %d", b, a, c, b);
    }

    else {
        printf("%d is greatest between %d, %d and %d", c, a, b, c);
    }
}

