
#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character (press Enter to stop): ");
    ch = getchar();

    while (ch != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }
        printf("%c", ch);
    }

    return 0;
}
