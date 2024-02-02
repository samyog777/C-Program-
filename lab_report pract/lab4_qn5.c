#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int *arr1 = (int *)malloc(sizeof(int));
    int *arr2 = (int *)malloc(sizeof(int));
    int *sumArr = (int *)malloc(sizeof(int));

    if (arr1 == NULL || arr2 == NULL || sumArr == NULL) {
        printf("Some error occor while allocating memory: ");
        free(arr1);
        free(arr2);
        free(sumArr);
    }

    printf("Enter the value of array to the array1: ");
    for (int i=0;i<size;i++) {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the value for array 2: ");
    for (int i=0;i<size;i++) {
        scanf("%d",&arr2[i]);
    }

    for (int i=0;i<size;i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    printf("The sum of array is: ");
    for (int i=0;i<size;i++) {
        printf("%d ",sumArr[i]);
    }
    free(arr1);
    free(arr2);
    free(sumArr);
}