#include <stdio.h>
int cubeNum(int num1);

int main() {
    int a;
    printf("Enter a number to make its cube: ");
    scanf("%d",&a);
    int cube = cubeNum(a);
    printf("The cube of %d is %d",a,cube);
}

int cubeNum(int num) {
    return num*num*num;
}
