# include <stdio.h>

#include <stdio.h>

int main() { 
    int a[] = {1,2,4,3,65,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]); 
    int larg = 0;
    for (int i=0;i<size;i++) {
        if (a[i] > larg) {
            larg = a[i];
        }
    }
    printf("%d",larg);
    return 0;
}