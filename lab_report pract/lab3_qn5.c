#include <stdio.h>
 
int main() {
    int arr[] = {1,2,3,4,5,6,7,89,4,3,45,2,21,44,22,11,67,55,65,75,95};
    int size = sizeof(arr)/sizeof(arr[0]);
 
    for (int i=0; i<size; i++) {
        if (arr[i]%2 != 0 && arr[i]%3 !=0 && arr[i]%5 == 0) {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
