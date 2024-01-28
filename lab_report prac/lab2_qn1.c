# include <stdio.h>

int main() {
    int a;
    printf("Enter a number to find its cube: ");
    scanf("%d",&a);

    int cube = cubeNumber(a);
    printf("The cube of %d is %d",a,cube);
}

int cubeNumber(int num1) {
    return num1*num1*num1;
}