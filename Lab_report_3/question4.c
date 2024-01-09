#include <stdio.h>
#include <stdlib.h>
// using qsort method for sorting the array
int ascend(const void *a, const void *b) {
    return ((int)a - (int)b);
}

int main() {
    int a[] = {4, 2, 8, 1, 7};
    int size = sizeof(a) / sizeof(a[0]);

    // Using qsort to sort the array
    qsort(a, size, sizeof(int), ascend);

    // Printing the sorted array
    printf("Sorted Array: ");
    int i = 0;
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
