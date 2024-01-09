# include <stdio.h>

int can_vote(int age) {
    if (age < 0) {
        printf("wrong input");
    }
    else if (age >= 18) {
        printf("You can vote");
    } 
    else {
        printf("You cannot vote");
    }   
    return 0;  
}

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    can_vote(age);
}


