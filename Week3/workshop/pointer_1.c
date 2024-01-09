# include <stdio.h>

int main() {
    int a = 45;
    int *ptr;
    ptr = &a;
    // *ptr = 30;
    printf("Value of *ptr is: %d\n", *ptr);
    printf("Memory address of ptr: %p\n", &ptr);
    printf("Memory address of a: %p\n", &a);
    printf("The value of ptr: %p\n", ptr);
    return 0;
}