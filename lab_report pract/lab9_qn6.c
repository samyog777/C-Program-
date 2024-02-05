#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int arr[10] = {1,2,3,4,5,0,6,7,8,9};
int size = sizeof(arr)/sizeof(arr[0]);
int target;
int found;
int index;

void *first (void *p) {
    int num_threads = (*(int *) p);
    int start = num_threads*(size/2);
    int finish = start+(size/2);

    for (int i=start;i<finish;i++) {
        if (arr[i]==target) {
            found = 1;
            index = i;
            break;
        }
    }
    return NULL;
}

int main() {
    printf("ENter: ");
    scanf("%d",&target);

    pthread_t threads[2];
    int threads_args[2] = {0,1};

    for (int i=0;i<2;i++) {
        pthread_create(&threads[i],NULL,first,&threads_args[i]);
    }
    for (int i=0;i<2;i++) {
        pthread_join(threads[i],NULL);
    }
    if (found) {
        printf(" element %d Found at index %d",target,index);
    } else {
        printf("Element %d not found!",target);
    }
}