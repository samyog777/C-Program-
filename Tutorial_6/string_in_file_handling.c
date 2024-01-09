# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("23group.txt","w");
    char ch[10] = "Samyog";

    if(fptr!=NULL) {
        printf("File opened successfully");
        fputs(ch,fptr);
    } else {
        printf("File cannot be opened");
    }
    fclose(fptr);
    return 0;
}
