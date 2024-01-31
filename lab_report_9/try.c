// #include <stdio.h>
// #include <pthread.h>

// void *findPrimes(void *p) {
//     int *range = (int *)p;
//     int start = range[0];
//     int finish = range[1];
    
//     for (int i = start; i <= finish; i++) {
//         int isPrime = 1;
//         for (int j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime && i > 1) {
//             printf("Prime number: %d\n", i);
//         }
//     }
    
//     return NULL;
// }

// int main() {
//     int num_threads;
//     printf("Enter the number of threads: ");
//     scanf("%d", &num_threads);

//     pthread_t threads[num_threads];

//     for (int i = 0; i < num_threads; i++) {
//         int range[2] = {i * (1000 / num_threads) + 1, (i + 1) * (1000 / num_threads)};
//         pthread_create(&threads[i], NULL, findPrimes, (void *)range);
//     }

//     for (int i = 0; i < num_threads; i++) {
//         pthread_join(threads[i], NULL);
//     }

//     return 0;
// }

    #include <stdio.h>
    #include <pthread.h>
    #include <unistd.h>

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target = 6;
    int found = 0;
    int index;

    void *first(void *p) {
        int thread_num = *((int *) p);
        int start = thread_num *(10/2);
        int end = start + (10/2);

        for (int i=start;i<end;i++) {
            if (arr[i] == target) {
                found = 1;  
                index = i;
                break;
            }
        }
        return NULL;
    }

    int main() {
        pthread_t threads[2];
        int thread_args[2] = {0,1};

        for (int i=0;i<2;i++) {
            pthread_create(&threads[i],NULL,first,&thread_args[i]);
        }
        for (int i=0;i<2;i++) {
            pthread_join(threads[i],NULL);
        }

        if (found) {
            printf("Element(%d) found at %dth index",target,index);
        } else {
            printf("Element(%d) not found at any index",target);
        }
        return 0;
    }
