# include <stdio.h>

int main() {
    int n, num, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0) {
        n = num % 10; // assigning n to the last digit of num
        sum += n; // adding n to sum
        num /= 10; // removing last digit
    }
    printf("The sum of the numbers is: %d", sum);
    return 0;
}
