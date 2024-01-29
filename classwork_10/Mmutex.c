#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int shared = 10;
pthread_mutex_t mutex; // Declaring the variable

void *first(void *p) {
    pthread_mutex_lock(&mutex); // locking resource so that thread1 can only use it
    int x =shared;
    x++;
    sleep(1);
    shared=x;
    pthread_mutex_unlock(&mutex); // Unlocking resource so that thread1 can only use it
}

void *second(void *p) {
    pthread_mutex_lock(&mutex); // locking resource so that thread1 can only use it
    int y = shared;
    y--;
    sleep(1);
    shared=y;
    pthread_mutex_unlock(&mutex); // Unlocking resource so that thread1 can only use it
}

int main(){
    pthread_t thread1,thread2;
    pthread_mutex_init(&mutex,NULL); // initializing mutex
    pthread_create(&thread1,NULL,first,NULL);
    pthread_create(&thread2,NULL,second,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread1,NULL);
    printf("The shared value is: %d",shared);
    pthread_mutex_destroy(&mutex); // destorying mutex to avoid future consequences i.e. deadlock, resources Leakage
    return 0;
}



