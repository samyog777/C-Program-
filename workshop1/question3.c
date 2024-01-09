# include <stdio.h>

int main() {
    int n, i, trangular = 0;
    printf("Enter the limit to the trangular number: ");
    scanf("%d", &n);

    for (i= 1; i <=n; i++) {
        trangular += i;
        printf("%d", trangular);
        printf(" ");
    }
    return 0;
}
