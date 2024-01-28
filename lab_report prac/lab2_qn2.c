#include <stdio.h>

int main() {
    int a=10,b=20;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}

int swap(int *num1, int *num2) {
    int i = *num1;
    *num1 = *num2;
    *num2 = i;
    return 0;
}
