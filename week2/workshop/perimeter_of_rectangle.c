# include <stdio.h>

int perimeter_of_rectangle(int length, int breath) {
    int perimeter = 2 * (length + breath);
    return perimeter;
}

int main() {
    int length, breath;
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breath: ");
    scanf("%d", &breath);

    int perimeter = perimeter_of_rectangle(length, breath);
    printf("The perimeter of your rectangle is: %d", perimeter);

    return 0;
}