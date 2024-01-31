#include <stdio.h>

int main() {
    int sum=0,limit;
    printf("Enter limit for sum: ");
    scanf("%d",&limit);
    for(int i=0;i<=limit;i++) {
        sum += i;
    }   
    printf("The sum of the number is: %d",sum);
    return 0;
}