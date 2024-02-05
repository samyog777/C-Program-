#include <stdio.h>
int arr[] = {1,2,3,4,5,0,6,7,8,9};
int target;
int size = sizeof(arr)/sizeof(arr[0]);
int index;
int found;

int SearchElem(int *ptr,int size,int target) {
    for (int i=0;i<size;i++) {
        if(*(ptr+i) == target) {
            found = 1;
            index = i;
        }
    }
    return NULL;
}

int main() {
    printf("Enter target: ");
    scanf("%d",&target);
    
    int *ptr = &arr;

    SearchElem(ptr,size,target);
    if(found) {
        printf("Element %d found at index %i",target,index);
    } else {
        printf("Element %d not found!",target);
    }
    return 0;
}
