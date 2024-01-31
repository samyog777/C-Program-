# include <stdio.h>

int main() {
    int n, trangular = 0;
    printf("Enter a limit to the trangular number: ");
    scanf("%d",&n);
    for (int i=1; i<n;i++) {
        trangular += i;
        printf("The trangular number at %d is %d\n",i,trangular);
    }
    return 0;
}