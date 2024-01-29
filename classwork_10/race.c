#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int shared = 10;
void *first(void *p) {
    int x =shared;
    x++;
    sleep(1);
    shared=x;
}

void *second(void *p) {
    int y = shared;
    y--;
    sleep(1);
    shared=y;
}

int main(){
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,first,NULL);
    pthread_join(thread1,NULL);
    pthread_create(&thread2,NULL,second,NULL);
    pthread_join(thread2,NULL);
    printf("The shared value is: %d",shared);
    return 0;
}