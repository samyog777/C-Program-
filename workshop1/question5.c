// # include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter a character: ");
//     ch = getche();
//     while (ch!=13) {
//         if (ch>'A' &&  ch <='Z') {
//             ch = ch + 32;
//         }
//         printf("\n%c", ch);
//         printf("\nEnter the character again: ");
//         ch = getche();
//         printf("\n%c", ch);
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    char letter;
    printf("Enter a letter: ");
    letter = getche();
    while (letter != 13) {
        if (letter > 'A' && letter < 'Z') {
            letter = letter + 32;
        }
        printf("%c", letter);
        printf("Enter a new character: ");
        letter = getche();
        printf("%c", letter);
    }
}
    
