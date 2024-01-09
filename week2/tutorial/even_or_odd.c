# include <stdio.h>

void even_or_odd(int );

void even_or_odd  (int a ) {
    if (a % 2 == 0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
}

int main() {
    int a; 
    printf("Enter the number: ");
    scanf("%d", &a);
    even_or_odd(a);
    return 0;
}