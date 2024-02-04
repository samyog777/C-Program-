#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* evenfile = fopen("even.txt","w"),
    * oddfile = fopen("odd.txt","w");

    if (oddfile == NULL|| evenfile == NULL) {
        printf("Error opening the file!");
        return 0;
    }

    char choice[3];
    while(strcmp(choice,"no") != 0) {
        printf("Enter the number and no to stop: ");
        scanf("%s",choice);
        int num = atoi(choice);
        if (strcmp(choice,"no") != 0) {
            if (num%2 == 0) {
                fprintf(evenfile,"%d\n",num);
            } else {
                fprintf(oddfile,"%d\n",num);
            }
        }
    }
    printf("Success");
    fclose(oddfile);
    fclose(evenfile);
    return 0;
}