# include <stdio.h>

int main() {
    int n;
    char ch = 'A';
    printf("Enter a limit to the trangle shape: ");
    scanf("%d",&n);
    
    for (int i=0;i<=n;i++) {
        for (int j=0;j<i+1;j++) {
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
}
