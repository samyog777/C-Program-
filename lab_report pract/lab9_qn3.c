#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *first(void *p) {
    for (int i=0;i<200;i++) {
        printf("%d\n",i);
    }
}

void *second(void *p) {
    for (int i=200;i<400;i++) {
        printf("%d\n",i);
    }
}

void *third(void *p) {
    for (int i=400;i<600;i++) {
        printf("%d\n",i);
    }
}

void *forth(void *p) {
    for(int i=600;i<800;i++) {
        printf("%d\n",i);
    }
}

int main() {
    pthread_t thread1,thread2,thread3,thread4;
    pthread_create(&thread1,NULL,first,NULL);
    pthread_create(&thread2,NULL,second,NULL);
    pthread_create(&thread3,NULL,third,NULL);
    pthread_create(&thread3,NULL,forth,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    return 0;
}