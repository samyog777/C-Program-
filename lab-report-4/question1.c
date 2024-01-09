# include <stdio.h>

int main() {
    int array[] = {1,2,8};
    int *ptr = array;

    int sum = 0;
    int size = sizeof(array)/sizeof(array[0]);

    for (int i=0; i<size; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("The sum of array is: %d", sum);
    return 0;
}


