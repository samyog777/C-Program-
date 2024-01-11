// #include <stdio.h>
// int main(){
//     FILE *f;
//     char s[20] = "ABC";
//     f = fopen("demo2.txt","r+");
//     if (f == NULL) {
//         printf("null");
//     }
// }

// #include <stdio.h>
//     int main(){
//     char c;
//     FILE *fp;
//     fp=fopen("demo.txt","r");
//     while((c=fgetc(fp))!=EOF) {
//         printf("%c",c);
//     }
//     fclose(fp);
//     return 0;
// }

// #include <stdio.h>
// int main(){
// char c;
// FILE *fp;
// fp=fopen("demo2.txt","w");
// fprintf(fp,"demo");
// fclose(fp);
// fp=fopen("demo2.txt","r");
// while((c=fgetc(fp))!=EOF)
// printf("%c",c);
// fclose(fp);
// return 0;
// }

// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char *str; 
//     fp = fopen("demo.txt", "r");

//     if (fp == NULL) {
//         printf("Error opening the file.\n");
//         return 1;
//     }
//     while (fgets(str, 6, fp) != NULL) {
//         puts(str);
//     }
//     fclose(fp);
//     return 0;
// }

// # include <stdio.h>

// void main() {
//     int i=1;
//     while(i<3) {
//         printf("%d\n", i);
//         i++;
//     }
// }

#include <stdio.h>

// void main() {
//     int a=99, b=9, result;
//     result = a>b;
//     printf("%d", result);
// }

// void main() {
//     int a=5, b=2, result;
//     int *x, *y;
//     x = &a;
//     y = &b;
//     result = *x+5;
//     result = result * (*y);
//     printf("%d",result);
// }

// struct complex{
//     int real;
//     int imag;
// };
// void modifyComplex(struct complex* ptr) {
//     ptr-> real=ptr->real+1;
//     ptr -> imag=ptr-> imag+2;
// }
// void main() {
//     struct complex s1= {5,6};
//     modifyComplex(&s1);
//     printf("%d + %di",s1.real,s1.imag);
// }
void main() {
    int arr1[] ={2,3};
    int arr2[3]={9};
    printf("%d %d",arr1[1],arr2[2]);

}

