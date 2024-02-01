#include <stdio.h>

int SearchElem(int *arr,int target,int size) {
    for(int i=0;i<size;i++ ){
        if (*(arr+i) == target) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int size,target;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter value in array: ");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target: ");
    scanf("%d",&target);
    if(SearchElem(arr,target,size)==0) {
        printf("Element %d found in the array!",target);
    } else {
        printf("Element %d not found in the array",target);
    }
    return 0;
}