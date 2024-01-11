# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("L5CG23.txt","r");
    if (fptr == NULL) {
        printf("File not file");
    }
    char ch;
    ch=fgetc(fptr);
    printf("character from the file: %c",ch);
    fclose(fptr);
    return 0;
}
  