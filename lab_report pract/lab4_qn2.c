#include <stdio.h>

int SearchElem(int *arr,int size,int target) {
    for (int i=0;i<size;i++) {
        if (*(arr+i)==target) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {1,2,3,4,5,2,12,4,6,7,2,6};
    int target;
    printf("Enter a target: ");
    scanf("%d",&target);
    
    int size = sizeof(arr)/sizeof(arr[0]);

    int result= SearchElem(arr,size,target);
    if (result == 0) {
        printf("Element found");
    } else {
        printf("Not found");
    }
}