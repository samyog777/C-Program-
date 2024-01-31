#include <stdio.h>

int main() {
    int arr[] = {1,3,5,7,9,2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int large = 0;

    for (int i=0;i<size;i++) {
        if(arr[i]>large) {
            large = arr[i];
        }
    }
    printf("%d",large);
    return 0;
}
