# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("L5CG23.txt","r");
    if (fptr == NULL) {
        printf("File not file");
    }
    char ch[1000];
    // fgets(ch,1000,fptr);
    while(!feof(fptr)) {
        fgets(ch,sizeof(ch),fptr);
        printf("File data: %s",ch);
    }
    fclose(fptr);
    return 0;
}
  