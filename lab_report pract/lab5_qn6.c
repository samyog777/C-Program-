#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int salary;
    int time;
};

int main() {
    int n;
    printf("Enter how many employee do you have: ");
    scanf("%d",&n);

    struct Employee* e = (struct Employee*) malloc(n* sizeof(struct Employee));

    for (int i=0;i<n;i++) {
        printf("Enter the information for %d \n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Salary: ");
        scanf("%d",&e[i].salary);
        printf("Time: ");
        scanf("%d",&e[i].time);
    }
    findHeightsalary(e,n);

    free(e);
    return 0;
}

void findHeightsalary(struct Employee* e,int n) {

    for (int i=1; i<n; i++) {
        if (e[i].salary > e[0].salary) {
            e[0].salary = e[i].salary;
        }
    }
    printf("The heighest salary : \n");
    printf("Name: %s\n",e[0].name);
    printf("Salary: %d\n",e[0].salary);
    printf("Time: %d\n",e[0].time);
}


