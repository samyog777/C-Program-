#include <stdio.h>
#include <pthread.h>

// int main() {
//     int i,c;
//     int start = 1,finish = 500;
//     for (i=start;i<=finish;i++) {
//         for (c=2;c<=i-1;i++) {
//             if(i%c == 0) {
//                 break;
//             }
//         }
//         if(c==i) {
//             printf("Prime numbers: %d\n",i);
//         }
//     }
//     return 0;
// }

void *first (void *p) {
    int i,c;
    int start = 1,finish = 250;
    for (i=start;i<=finish;i++) {
        for (c=2;c<=i-1;c++) {
            if(i%c == 0) {
                break;
            }
        }
        if(c==i) {
            printf("Prime numbers: %d\n",i);
        }
    }
}

void *second(void *pin) {
    int i,c;
    int start = 250,finish = 500;
    for (i=start;i<=finish;i++) {
        for (c=2;c<=i-1;c++) { 
            if(i%c == 0) {
                break;
            }
        }
        if(c==i) {
            printf("Prime numbers: %d\n",i);
        }
    }
    return NULL;
}


int main() {
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,first,NULL);
    pthread_create(&thread1,NULL,second,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    return 0;
}
