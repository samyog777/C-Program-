# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("23group.txt","w");
    char name[10];
    int age;
    if(fptr!=NULL) {
        printf("File opened successfully \n");
        printf("Enter your name: ");
        scanf("%s",name);
        printf("Enter your age: ");
        scanf("%d",&age);
        fprintf(fptr,"Name: %s and Age: %d",name, age);
    } else {
        printf("File cannot be opened");
    }
    fclose(fptr);
    return 0;
}
