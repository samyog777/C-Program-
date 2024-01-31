#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,4,3,1,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++) {
        bool isTrue = true;
        for (int j=0; j<i;j++) {
            if(arr[i] == arr[j]) {
                isTrue = false;
                break;
            }
        }
        if (isTrue == true) {
            printf("%d ",arr[i]);
        }
    }
}

