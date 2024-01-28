#include <stdio.h>
int main() {
    int i, trangular=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;i<=num;i++) {
        trangular = i+trangular;
        printf("%d ",trangular);
    }
    return 0;
}