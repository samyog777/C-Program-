# include <stdio.h>

int main() {
    int a=10,b=20;
    int *ptr;
    ptr = &a;
    int **ptr1;
    ptr1=&ptr;
    int ***ptr2;
    ptr2=&ptr1;
    printf("The value of a: %d\n",a);
    printf("The value of a: %d\n",*ptr);
    printf("The value of a: %d\n",**ptr1);
    printf("The value of a: %d\n",***ptr2);
    return 0;
}
