#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dInt;
    float *dFloat;
    char *dChar;

    dInt = (int *)malloc(sizeof(int));
    if(dInt == NULL) {
        printf("Cannot allocate value to Int");
        return 1;
    }

    dFloat= (float *)malloc(sizeof(float));
    if(dFloat == NULL) {
        printf("Cannot allocate value to FLoat");
        free(dInt);
        return 1;
    }

    dChar = (char *)malloc(sizeof(char));
    if(dChar == NULL) {
        printf("Cannot allocate value to Char");
        free(dFloat);
        free(dInt);
        return 1;
    }

    *dInt = 12;
    *dFloat = 12.43;
    *dChar = 'A';

    printf("Int: %d\n",*dInt);
    printf("Float: %f\n",*dFloat);
    printf("Char: %c",*dChar);

    free(dInt);
    free(dChar);
    free(dFloat); 
}

