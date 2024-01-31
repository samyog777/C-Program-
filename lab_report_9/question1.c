#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *first(void *p) {
    for(int i=0;i<500;i++) {
        printf("%d\n",i);
    }
}

void *second(void *p) {
    for (int i=500;i<=1000;i++) {
        printf("%d\n",i);
    }
}

int main() {
    pthread_t thread1, thread2;
    pthread_create(&thread1,NULL,first,NULL);
    pthread_create(&thread2,NULL,second,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    return 0;
}




