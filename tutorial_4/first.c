# include <stdio.h>

int main() {
    int a=10;
    int *ptr;
    ptr = &a;
    int **ptr1;
    ptr1 = &ptr;

    printf("The value of a: %d\n",a);
    printf("The value of a: %d\n",*ptr);
    printf("The memory address of a: %d\n",&a);
    printf("The memory address of a: %d\n",ptr);
    printf("The memory address of ptr: %d\n",&ptr);
    printf("The memory address of a: %d\n",*ptr1);
    printf("The memory address of ptr: %d",&ptr);
    return 0;
}

