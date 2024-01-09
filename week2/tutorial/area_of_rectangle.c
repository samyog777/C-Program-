# include <stdio.h>

int area_of_rec (int a, int b) {
    int area = a*b;
    return area;
}

int main() {
    int x , y;
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    int area = area_of_rec(x, y);
    printf("The area of the rectangle is: %d ", area);
    return 0;
}
