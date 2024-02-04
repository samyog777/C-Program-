#include <stdio.h>

int main() {
    int num[2];

    printf("Enter the lower limit: ");
    scanf("%d",&num[0]);
    printf("Enter the upper number: ");
    scanf("%d",&num[1]);
    if (num[0] > num[1]) {
        printf("Lower is bigger!!");
        return 1;
    }
    display(num);
    return 0;
}

int display (int num[2]) {
    int lnum = num[0];
    int unum = num[1];

    for (int i=lnum; i<unum;i++) {
        printf("%d ",i);
    }
    return 0;
}

