# include <stdio.h>

void great(int a, int b) {
    if ( a == b ) {
        printf("Both are same");
    }
    else if (a > b) {
        printf(" %d is greater than %d. ", a, b);
    }
    else {
        printf(" %d is greater than %d. ", b, a);
    }
}

int main() {
    int a , b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    great(a, b);
    return 0 ;
}