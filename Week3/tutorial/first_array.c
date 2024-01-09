// #include <stdio.h>

// void main() {
//     int array[5] = {1,2,3,4,5};
//     int i;
//     for (i =0; i<5; i++) {
//         printf("index: %d value %d \n", i, array[i]);
//     }
// }

#include <stdio.h>

int main() {
    int size, i;
    printf("enter size of an array: ");
    scanf("%d", &size);
    int a[size];

    printf("Enter the element of an array: ");
    for (i=0;i<size;i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter elements are: ");
    for (i=0;i<size;i++) {
        printf("\n Index: %d value: %d", i, a[i]);
    }
    return 0;
}
