#include <stdio.h>

int main() {
    FILE* file = fopen("sum.txt","a");
    int num,sum=0;

    while (num != -1){
        printf("Enter the value of: ");
        scanf("%d",&num);
        if (num != -1) {
            sum+=num;
        }
    }
    fprintf(file,"Sum: %d",sum);
    printf("%d",sum);
    fclose(file);
    return 0;
}
