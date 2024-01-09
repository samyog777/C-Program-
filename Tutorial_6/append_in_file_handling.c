# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("23group.txt","a");
    char Address[20];
    long long int phoneNumber;
    if(fptr!=NULL) {
        printf("File opened successfully \n");
        printf("Enter your Address: ");
        scanf("%s",Address);
        printf("Enter your phone number: ");
        scanf("%lld",&phoneNumber);
        fprintf(fptr,"\n Address: %s and PhoneNumber: %lld" ,Address, phoneNumber);
    } else {
        printf("File cannot be opened");
    }
    fclose(fptr);
    return 0;
}

