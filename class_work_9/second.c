# include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *first(void *p) {
    sleep(1);
    for(int i=0;i<8;i++) {
        printf("I am first\n");
    }
}
 
void second() {
    for (int i=0;i<3;i++) {
        printf("I am second\n");
    }
}

int main() {
    pthread_t thread;
    pthread_create(&thread,NULL,first,NULL);
    second();
    pthread_join(thread,NULL);
}
