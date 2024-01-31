#include <stdio.h>

int main() {
    int arr[2][2] = {{2,3},{4,5}};
    int arr1[2][2] = {{2,3},{4,5}};

    printf("In 2d form: \n");
    int result[2][2];
    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            result[i][j] = arr[i][j] + arr1[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    // for (int i=0; i<2;i++) {
    //     for (int j=0; j<2;j++) {
    //         printf("%d",result[i][j]);
    //     }
    // }
}
