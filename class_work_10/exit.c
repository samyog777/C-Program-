#include  <stdio.h>
#include <pthread.h>
#include <unistd.h>

char ch ='A';
void *fun(void *p) {
    pthread_exit((void*)&ch);
}

void main() {
    void *ptr;
    pthread_t thread1;
    pthread_create(&thread1, NULL,fun, NULL);
    sleep(1);
    pthread_join(thread1,&ptr);
    printf("The value of ch: %c",*(char*)ptr);

}
