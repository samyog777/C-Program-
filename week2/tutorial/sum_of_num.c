#include <stdio.h>

// int sumofnum = (int, int);

int sumofnum (int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int a = 10, b = 20;
    int sum = sumofnum(a,b);
    printf("The sum of the 2 numbers is: %d", sum);
    return 0;
}

