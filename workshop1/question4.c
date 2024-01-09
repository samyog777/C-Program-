# include <stdio.h> 

int main() {
    char letter;

// promt users letter
    printf("Enter your letter: ");
    scanf("%c", &letter);

// using if else to find weather the input is in lower case or upper case
    if (letter >= 'A' && letter <= 'Z') {
        char lower_case = letter + 32;
        printf("%c", lower_case);
    }

    else {
        printf("%c", letter);
    }
}
