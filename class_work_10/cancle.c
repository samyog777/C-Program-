#include  <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *fun(void *p){
    int i;
    for(i=0;i<=100000;i++){
        printf("Hello from i:%d \n",i);
        pthread_testcancel();
    }
}

void main() {
    pthread_t thread1;
    pthread_create(&thread1,NULL,fun,NULL);
    sleep(1);
    pthread_cancel(thread1);
    printf("Thread Cancelled.\n");
    pthread_join(thread1,NULL);
}

