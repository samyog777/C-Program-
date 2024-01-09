# include <stdio.h>

int main() {
    int a=10,b=20;
    int *ptr,*ptr1;
    ptr = &a;
    ptr1 = &b;
    int sum = *ptr+*ptr1;
    printf("The sum of two number is: %d",sum);

}