# include <stdio.h>

// void main(int, int);

void value (int a, int b) {
    a = 10;
    b = 20;
}

int main() {
    int a = 30, b = 40;
    value (a, b);
    printf("a: %d  and b: %d", a, b );
    return 0;
}