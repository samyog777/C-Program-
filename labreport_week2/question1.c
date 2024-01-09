# include <stdio.h>

int cube_of_number(int num1) {
    int cube = num1 * num1 * num1;
        return cube;
}

int main() {
    int number;
    printf("Enter the number to convert it into cube: ");
    scanf("%d", &number);
    int cube = cube_of_number(number);
    printf("The cube of %d is %d.", number, cube);
}