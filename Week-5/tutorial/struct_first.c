# include <stdio.h>

// struct{
//     char name[20];
//     int rollno;
//     char classgroup[10];
//     char address[20];
// } student1;

// int main(){
//     snprintf(student1.name,sizeof(student1.name), "Samyog");
//     student1.rollno = 23;
//     snprintf(student1.classgroup,sizeof(student1.classgroup),"L5CG23");
//     snprintf(student1.address,sizeof(student1.address),"Brammakhel");
//     printf("Student1 Information: \n");
//     printf("Name: %s\n",student1.name);
//     printf("Rollno: %d\n",student1.rollno);
//     printf("Classgroup: %s \n",student1.classgroup);
//     printf("Address: %s \n",student1.address);
//     return 0;
// }

struct Student_info{
    char name[20];
    int rollno;
    char classgroup[10];
    char address[20];
};

int main() {
    struct Student_info student1 = {"Samyog",18,"L5CG23","Brammalhel"};
    struct Student_info student2 = {.address="hadi_gaun" ,.name= "Avimanyu", .classgroup = "L5CG23", .rollno = 34};
    
    // student1.name = "Sam";
    // student1.rollno = 253;
    // student1.classgroup = L5CG23;
    // student1.address = "Brammakhel";
     printf("Student1 and student2 Information: \n");
    printf("Name: %s and %s\n",student1.name,student2.name);
    printf("Rollno: %d and %d\n",student1.rollno,student2.rollno);
    printf("Classgroup: %s and %s\n",student1.classgroup,student2.classgroup);
    printf("Address: %s and %s\n",student1.address,student2.address);
    return 0;
}
