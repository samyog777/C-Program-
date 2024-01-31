#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int arr[10] = {1,2,3,4,5,6,7,8,9,0};
int size = sizeof(arr)/sizeof(arr[0]);
int target;
int found;
int index;

void *first (void *p) {
    int thread_num = (*(int *) p);
    int start = thread_num*(size/2);
    int end = start+(size/2);

    for (int i=start;i<end;i++) {
        if (arr[i] == target) {
            found = 1;
            index = i;
            break;
        }
    }
    return NULL;
}

int main() {
    printf("Enter a element to search: ");
    scanf("%d",&target);

    pthread_t thread[2];
    int thread_args[2] = {0,1};

    for (int i=0;i<2;i++) {
        pthread_create(&thread[i],NULL,first,&thread_args[i]);
    }
    for (int i=0;i<2;i++) {
        pthread_join(thread[i],NULL);
    }

    if (found) {
        printf("Element (%d) found at index %d.",target,index);
    } else {
        printf("Element(%d) not found at any index!",target);
    }
    return 0;
}



