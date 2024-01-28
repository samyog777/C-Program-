#include <stdio.h>

int main() {
    int num1,num2;
    float result;
    char sign;

    printf("Enter an operator: ");
    scanf("%c",&sign);
    printf("Enter a first number: ");
    scanf("%d",&num1);
    printf("Enter a second number: ");
    scanf("%d",&num2);

    switch (sign) {
        case '+':
        result = num1+num2;
        printf("The addition of 2 numbers is: %f",result);
        break;

        case '-':
        result = num1-num2;
        printf("The subtraction of 2 numbers is: %f",result);
        break;

        case '*':
        result = num1*num2;
        printf("The multiplication of 2 numbers is: %f",result);
        break;

        case '/':
        result = num1/num2;
        printf("The division of 2 in 1 is: %f",result);
        break;

        default:
        printf("Wrong input");
        break;
    }
    return 0;
}