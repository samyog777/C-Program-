#include <stdio.h>

struct Employee {
    char name[50];
    int salary;
    int time;
};

int main() {
    struct Employee e[4];
    for (int i=0;i<4;i++) {
        printf("Enter Name: "); 
        scanf("%s",e[i].name);
        printf("Enter hours: "); 
        scanf("%d",&e[i].time);

        printf("\n");
        if (e[i].time >= 8 && e[i].time < 10) {
            printf("Name: %s\n",e[i].name);
            printf("Time: %d\n",e[i].time);
            printf("The salary is: $%d\n\n",e[i].time*50);
        } else if( e[i].time >=10 && e[i].time < 12) {
            printf("Name: %s\n",e[i].name);
            printf("Time: %d\n",e[i].time);
            printf("The salary is: $%d\n\n",e[i].time*100);
        } else if(e[i].time >=12){
            printf("Name: %s\n",e[i].name);
            printf("Time: %d\n",e[i].time);
            printf("The salary is: $%d\n\n",e[i].time*150);
        } else {
            printf("Wrong input");
        }
    }
    return 0;
}