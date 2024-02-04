# include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf ("%c",&ch);
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }
        printf("Character: %c",ch);
    }
    return 0;
}