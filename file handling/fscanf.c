# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("L5CG23.txt","r");
    if (fptr == NULL) {
        printf("File not file");
    }
    char name[10];
    int age;
    // fgets(ch,1000,fptr);
    fscanf(fptr,"Name: %s, Age: %d",name,&age);
    printf("Name: %s Age: %d",name,age);
    fclose(fptr);
    return 0; 
}
