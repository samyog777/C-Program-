
#include <stdio.h> 


int main() {
    float F, C;

    printf("Enter your temperature in farenheit: ");
    scanf("%f",&F);

    C = (F - 32) * (5.0 / 9.0);

    printf("The celsius of %f farenheit is %f ", F, C);

    return 0;
}