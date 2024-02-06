#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,0,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = &arr;

    int sum =0;
    for (int i=0;i<size;i++) {
        sum+=*ptr;
        ptr++;
    }
    printf("SUM: %d",sum);
    return 0;
}


