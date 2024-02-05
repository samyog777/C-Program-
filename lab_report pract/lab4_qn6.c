#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int *arr = (int *)malloc(size*sizeof(int));

    printf("Enter the value of array: ");
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("The value of array is: ");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }

    int new_size;
    printf("\nEnter the size of array: ");
    scanf("%d",&new_size);

    arr = (int *)realloc(arr,(size+new_size)*sizeof(int));

    printf("Enter the value to array: ");
    for (int i=size;i<(size+new_size);i++) {
        scanf("%d",&arr[i]);
    }

    printf("The final value of array is: ");
    for (int i=0;i<(size+new_size);i++) {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}   