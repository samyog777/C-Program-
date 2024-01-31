#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    printf("Enter a operator: ");
    scanf("%c",&operator);
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(operator) {
        case '+':
            int sum = num1+num2;
            printf("The addition is %d",sum);
            break;

        case '-':
            int sub = num1-num2;
            printf("The subtraction is %d",sub);
            break;
        case '*':
            int multi = num1*num2;
            printf("Multiplication is %d",multi);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot perform divide with 0");
            } else {
                float div = num1/num2;
                printf("Multiplication is %d",div);
            }
            break;
        default:
            printf("Wrong input");
            break;
    }
    return 0;
}