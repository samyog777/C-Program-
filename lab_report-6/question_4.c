#include <stdio.h>

int main() {
    FILE *evenFile = fopen("even.txt", "w"), *oddFile = fopen("odd.txt", "w");
    if (!evenFile || !oddFile) {
        printf("Unable to open files.\n");
        return 1;
    }

    int num;
    char choice[3];

    do {
        printf("Enter an integer (or 'no' to stop): ");
        scanf("%s", choice);
        if (strcmp(choice, "no") != 0) {
            num = atoi(choice);
            fprintf((num % 2 == 0) ? evenFile : oddFile, "%d\n", num);
        }
    } while (strcmp(choice, "no") != 0);

    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers have been written to even.txt and odd.txt\n");

    return 0;
}
