# include <stdio.h>

int sumofarray( int arr[], int size);

int sumofarray(int arr[], int size) {
    int i,sum = 0;
    for ( i=0;i<size;i++) {
        sum = sum+arr[i];
    }
    return sum;
}

int main() {
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = sumofarray(array, size);
    printf("Sum of elements of an array: %d", sum);
    return 0;
}