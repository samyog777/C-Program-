#include <stdio.h>

int main() {
    int arr[] = {1,2,4,5,7,7,8,4,3,1,4,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0; i<size;i++) {
        for (int j=0; j<i; j++) {
            if (arr[i]<arr[j]) {
                int in = arr[i];
                arr[i] = arr[j];
                arr[j] = in;
            }
        }
    }
    for (int i=0; i<size; i++) {
        printf("%d ",arr[i]);
    }
}
