#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int sum;
void *fun(void *p){
    int i;
    for(i=0;i<=1000;i++){
        sum+=i;
    }
    pthread_exit((void*)&sum);
}

void main(){
    void *ptr;
    pthread_t thread1;
    pthread_create(&thread1, NULL, fun, NULL);
    sleep(1);
    pthread_join(thread1,&ptr);
    printf("The sum of number upto 100 is: %d",*(int*)ptr);
}
