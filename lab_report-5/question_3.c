#include <stdio.h>

// Function to display numbers between lower and upper limits
void display(int lower, int upper) {
    printf("Numbers between %d and %d are:\n", lower, upper);
    for (int i = lower + 1; i < upper; ++i) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int lowerLimit, upperLimit;

    // Input lower and upper limits from the user
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    // Call the display function to print numbers between the limits
    display(lowerLimit, upperLimit);

    return 0;
}
