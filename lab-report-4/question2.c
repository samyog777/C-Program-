// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     // Dynamically allocate memory for the array
//     int *arr = (int *)malloc(size * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Enter elements for the array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0]; // Assume the first element as maximum

//     // Finding maximum element in the array
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     printf("Maximum element in the array: %d\n", max);

//     // Free dynamically allocated memory
//     free(arr);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    // Dynamically allocate memory for three arrays
    int *array1 = (int *)malloc(size * sizeof(int));
    int *array2 = (int *)malloc(size * sizeof(int));
    int *sumArray = (int *)malloc(size * sizeof(int));

    if (array1 == NULL || array2 == NULL || sumArray == NULL) {
        printf("Memory allocation failed.\n");
        free(array1);
        free(array2);
        free(sumArray);
        return 1;
    }

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Sum corresponding elements and store in sumArray
    for (int i = 0; i < size; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    printf("Sum of corresponding elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(array1);
    free(array2);
    free(sumArray);

    return 0;
}