#include <stdio.h>

int swapNum(int *a, int *b);

int swapNum(int *a, int *b) {
    int ab = *a;
    *a = *b;
    *b = ab;
    return 0;
}

int main() {
    int num1, num2;
    printf("Enter a and b: ");
    scanf("%d %d",&num1,&num2);
    printf("Before swaping: \n a = %d and b = %d\n",num1,num2);
    swapNum(&num1,&num2);
    printf("After swaping: \n a = %d, b = %d",num1,num2);
    return 0;
}