# include <stdio.h>

int main() {
    char ch;

    printf("Enter the character: ");
    ch = getchar();

    while (ch != '\n') {
        if (ch <= 'A' && ch >= 'Z') {
            ch += 32;
        }
        printf("%d", ch);
    }
    return 0;
}

