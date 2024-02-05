#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *first (void *p) {
    int i,j;
    for (i=1;i<=250;i++) {
        for (j=2;j<=i-1;j++) {
            if (i%j == 0) {
                break;
            }
        }
        if (j==i) {
            printf("Prime number: %d\n",i);
        }
    }
    return NULL;
}

void *second(void *p) {
    int i,j;
    for (i=250; i<=500;i++) {
        for (j=2;j<i-1;j++) {
            if (i%j == 0) {
                break;
            }
        }
        if (i==j) {
            printf("primr number: %d\n",i);
        }
    }
    return NULL;
}

int main() {
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,first,NULL);
    pthread_create(&thread2,NULL,second,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    return 0;
}