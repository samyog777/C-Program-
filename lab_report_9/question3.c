#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *first (void *p) {
    for (int i=0;i<=200;i++) {
        printf("%d\n",i);
    }
}

void *second(void *p) {
    for(int i=201;i<=400;i++) {
        printf("%d\n",i);
    }
}

void *third(void *p) {
    for (int i=401;i<=600;i++) {
        printf("%d\n",i);
    }
}

void *forth(void *p) {
    for(int i=601;i<=800;i++) {
        printf("%d\n",i);
    }
}

void *fifth(void *p) {
    for (int i=801;i<=1000;i++) {
        printf("%d\n",i);
    }
}
int main() {
    pthread_t thread1,thread2,thread3,thread4,thread5;
    pthread_create(&thread1,NULL,first,NULL);
    pthread_create(&thread2,NULL,second,NULL);
    pthread_create(&thread3,NULL,third,NULL);
    pthread_create(&thread4,NULL,forth,NULL);
    pthread_create(&thread5,NULL,fifth,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    return 0;
}