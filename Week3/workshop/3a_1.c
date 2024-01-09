# include <stdio.h>

int main() {
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    if ( a == b) {
        printf("Both are same!!");
    }
    else if (a < b) {
        printf("%d is maximum!!", *ptr2);
    }
    else{
        printf("%d is maximum!!", *ptr1);
    }
    return 0;
}