# include <stdio.h>
# include <stdlib.h>

int main() {
    int n,i;
    int *ptr;
    printf("Enter the size: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++) {
        printf("Enter the element for index %d: ", i);
        scanf("%p",ptr+i);
    }

    printf("\n Entered elements are: ");
    for (i=0;i<n;i++) {
        printf("Index: %d Memory address: %p Value: %d \n",i,ptr+i,*(ptr+i));
    }
    int new_size;
    printf("Enter additional size: ");
    scanf("%d",&new_size);
    ptr = (int*)realloc(ptr,new_size*sizeof(int));
    for(i=n;i<n+new_size;i++) {
        printf("Enter the elements for index %d: ",i);
        scanf("%d",ptr+i);
    }
    printf("The final array is: \n");
    for(i=0;i<n+new_size;i++) {
        printf("\n Index: %d memoryaddress: %d value: %d",i,ptr+i,*(ptr+i));
    }
    free(ptr);
    return 0;
}

