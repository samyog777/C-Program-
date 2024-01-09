# include <stdio.h>
# include <stdbool.h>

int main() {
    int a[]={1,2,3,2,4,5,6,5,1,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    bool isUnique;
    int i,j;

    for(i=0;i<size;i++) {
        isUnique = true;
        for (j=0;j<i;j++) {
            if(a[j]==a[i]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique==true) {
            printf("%d",a[i]);
        }
    }
    return 0;
}


