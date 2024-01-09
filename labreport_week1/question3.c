# include <stdio.h>

int main() {
    double a, b, result;
    char operator;

    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Enter the number1: ");
    scanf("%lf", &a);
    printf("Enter the number2: ");
    scanf("%lf", &b);


    switch (operator)
    {
    case '+':
        result = a + b ;
        printf("%lf", result);
        break;
    case '-':
        result = a - b;
        printf("%lf", result);
        break;
    case '*':
            result = a * b;
            printf("%lf\n", result);
            break;
    case '/':
        if (b != 0) {
           result =  a/b;
           printf("%lf", result);
        } else {
            printf("cannot divided by zero!!");
        }
        break;
    case '%':
        if (b != 0) {
            result = (int)a %(int)b;
            printf("%lf", result);
        } else {
            printf("Wrong input!");
        }
        break;
    default:
        printf("wrong input!");
        break;
    }
    return 0;
}
