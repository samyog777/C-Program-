# include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *first(void *p) {
    while(1) {
        sleep(1);
        printf("I am from first.\n");
    }
}
 
void second() {
    while(1) {
        sleep(1);
        printf("I am from second.\n");
    }
}

int main() {
    pthread_t thread;
    pthread_create(&thread,NULL,first,NULL);
    second();
}
