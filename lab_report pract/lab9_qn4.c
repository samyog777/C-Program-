#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *first(void *p) {
    int *range = (int *)p;
    int start = range[0];
    int finish = range[1];

    for (int i=start;i<finish;i++) {
        printf("%d\n",i);
    }
    return NULL;
}

int main() {
    int num_threads;
    printf("Enter the number of threads: ");
    scanf("%d",&num_threads);

    pthread_t threads[num_threads];

    for (int i=0;i<num_threads;i++) {
        int range[2] = {i*(1000/num_threads)+1,(i+1)*(1000/num_threads)};
        pthread_create(&threads[i],NULL,first,(void *)range);
    }
    for (int i=0;i<num_threads;i++) {
        pthread_join(threads[i],NULL);
    }
    return 0;
}
