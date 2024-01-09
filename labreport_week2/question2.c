# include <stdio.h>

int swap(int *a, int *b) {
    int z;
    z = *a;
    *a = *b;
    *b = z;
    return 0;
}
 
int main() {
    int x,y;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swaping: x = %d and y = %d. \n", x, y);

    swap(&x,&y);
    printf("After swaping x = %d, y = %d.\n", x, y);

    return 0;
}
