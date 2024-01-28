#include <stdio.h>

int main() {
    int userNum,i,j;
    char ch = 'A';

    printf("Enter a number: ");
    scanf("%d",&userNum);

    for (i=0;i<userNum;i++) {
        for(j=0;j<=i;j++) {
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}
