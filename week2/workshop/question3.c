# include <stdio.h>

void triangular(int n) {
    int triangular_num = 0;
    for (int i = 1; i <= n; i++) {
        triangular_num += i;
        printf("%d ", triangular_num);
    }
}

int main() {
    int n;

    printf("Enter the last number of triangular number: ");
    scanf("%d", &n);
    triangular(n);
}

