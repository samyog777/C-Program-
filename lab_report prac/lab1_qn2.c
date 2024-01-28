#include <stdio.h>

// int main() {
//     int i,userNum,sum=0;
//     printf("Enter a number to find its sum: ");
//     scanf("%d",&userNum);
//     for(i=0;i<=userNum;i++) {
//         sum+=i;
//     }
//     printf("The sum is: %d",sum);
//     return 0;
// }

int main() {
    int i,userNum,sum=0;
    printf("Enter a number to find its sum: ");
    scanf("%d",&userNum);
    while(userNum >0) {
        i=userNum%10;
        sum+=i;
        userNum=userNum/10;
    }
    printf("The sum of number is: %d",sum);
}