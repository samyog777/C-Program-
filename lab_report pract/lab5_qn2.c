#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    char post[50];
    int salary;
};

struct Employee* filterEMP(struct Employee e[],int size,int* new_size) {
    struct Employee* filterEMP = malloc(size*sizeof(struct Employee));
    int count=0;
    for (int i=0;i<size;i++) {
        if (e[i].salary > 10000) {
            filterEMP[count] = e[i];
            ++count;
        }
    }
    *new_size = count;
    return filterEMP;
}

int main() {
    struct Employee e[2];

    for(int i=0;i<2;i++) {
        printf("Enter the %d employee's information: \n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Post: ");
        scanf("%s",e[i].post);
        printf("Salary: ");
        scanf("%d",&e[i].salary);
        printf("\n");
    }
    int filtersize;
    struct Employee* ee = filterEMP(e,2,&filtersize);

    printf("The value of structure with salary 10000 is: \n");
    for (int i=0;i<filtersize;i++) {
        printf("Name: %s\n",ee[i].name);
        printf("Post: %s\n",ee[i].post);
        printf("Salary: %d\n",ee[i].salary);
    }
    free(ee);
    return 0;
}
