#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* evenfile = fopen("even.txt","w");
    FILE* oddfile = fopen("odd.txt","w");

    if (evenfile == NULL || oddfile == NULL) {
        printf("Cannot open a file!!");
        return 1;
    }
    char choice[3];

    while(strcmp(choice,"no") != 0) {
        printf("Enter a number and no to stop: ");
        scanf("%s",choice);

        if (strcmp(choice,"no") != 0) {
            int num = atoi(choice);
            if (num%2 == 0) {
                fprintf(evenfile,"%d\n",num);
            } else {
                fprintf(oddfile,"%d\n",num);
            }
        }
    }
    printf("Completed writing the odd in odd file and even in even file!");
    fclose(evenfile);
    fclose(oddfile);
    return 0;
}