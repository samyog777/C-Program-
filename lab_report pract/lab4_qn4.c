#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter a %d values to array: ",size);
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    for (int i=1; i<size;i++) {
        if (arr[0]<arr[i]) {
            arr[0] = arr[i];
        }
    }
    printf("The biggest element is: %d",arr[0]);
    return 0;
}