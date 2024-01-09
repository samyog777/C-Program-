// # include <stdio.h>
// # include <stdbool.h>
// int main() {
//     int x, y = 6, z = 6;
//     x = y == z;
//     printf("%d", x);
//     return 0;
// }

// int main() {
//     int a=5, b=6;
//     int result = a|b;
//     int result1 = a&b;
//     printf("%d and %d", result, result1);
// }

// int f(int a, int b) {
//     return a*2+b%5;
// }

// void main() {
//     int a=5, b=7;
//     printf("%d", f(a,b));
// }

// int main() {
//     int i=10;
//     printf("%d", i++);
//     return 0;
// }

// int main() {
//     int y = 1000;
//     int y = 34;
//     printf("Helo Wolld! %d \n", y);
//     return 0;
// }

// void main() {
//     int x = 5*9/3+9;
//     printf("%d",x);
// }

// int main() {
//     int d, a=1,b=2;
//     d = a++ + ++b;
//     printf("%d %d %d", d, a, b); 
// }

// int main() {
//     float a = 12.32;
//     double b = 12.32;
//     printf("%f %lf",a,b);
// }

// int main() {
//     char arr[] = "Samyog";
//     char arra[10] = "Samyog";

//     printf("%s and %s", arr, arra);
// }

// int main() {
//     while(true) {
//         printf("Samyog");
//     }
//     return 0;
// }

// int main() {
//     short i;
//     for (i=1; i>=0; i++) {
//         printf("%d", i);
//     }
// }

// float isOdd(int n){
//     if (n%2 ==1) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int main() {
//     printf("%f", isOdd(7));
//     return 0;
// }

// void incrementByReference(int *x) {
//     (*x)++;
// }
// int main() {
//     int value = 10;
//     incrementByReference(&value); // Call by reference using pointer
//     // 'value' is modified (incremented) to 11 after the function call
//     printf("%d", incrementByReference);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10;
//     int *pt = &a;

//     printf("Address of 'a': %d\n", *pt); // Printing the address of 'a'
//     printf("Value of 'a': %p\n", pt); // Printing the value of 'a'

//     return 0;
// }

// #include <stdio.h>
// void funct(int *a){
// *a= *a * 5;
// printf("*a=%d ",*a);
// }
// int main(){
//     int a=6;
//     funct(&a);
//     printf("a=%d ",a);
// }

#include <stdio.h>

// void funct(int a) {
//     a = a*6;
//     printf("The value of a in funct is: %d,",a);
// }

// int main() {
//     int a = 6;
//     funct(a);
//     printf("a in main function is %d", a);
//     return 0;
// }

// int functy(int a) {
//     a = a*6;
//     printf("a in funct is %d", a);
//     return a;
// }

// int main() {
//     int a = 6;
//     functy(a);
//     printf("a in the main function is: %d", a);
//     return 0;
// }

// #include <stdio.h>
// void solve() {
//     int x = printf("Shyam");
//     printf(" %d", x);
// }
// int main() {
//     solve();
//     return 0;
// }

// void swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// void function() {
//     int a = 3, b = 5;
//     swap(&a,&b);
//     printf("%d %d", a, b);
// }

// int main() {
//     function();
//     return 0;
// }

// #include <stdio.h>
// void function() {
// char ch[10] =
// "abcdefghij";
// int a= 0;
// for(int i = 0; i < 10; i++) {
// a += (ch[i] - 'a');
// }
// printf("%d", a);
// }
// int main() {
// function();
// return 0;
// }

// #include <stdio.h>
// void function() {
// char ch[10] =
// "abcdefghij";
// int a= 0;
// for(int i = 0; i < 10; i++) {
// a += (ch[i] - 'a');
// }
// printf("%d", a);
// }
// int main() {
// function();
// return 0;
// }

// #include <stdio.h>
// void function() {
// int first = 10, second =
// 20;
// int third = first + second;
// {
// int third = second -
// first;
// printf("%d ", third);
// }
// printf("%d", third);
// }

// int main() {
//     function();
//     return 0;
// }

// #include <stdio.h>
// void function() {
//     int a = 3;
//     int res = a++ + ++a + a++ + ++a;
//     printf("%d", res);
// }
// int main() {
//     function();
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char str1[30]="Harry";
//     char str2[30];
//     str2 = str1;
//     printf("%s",str2);
// }

// #include <stdio.h>
// void main() {
// int a[3] = {5};
// int i;
// for(i=0;i<3;i++){
// printf("%d",a[i]);
// }
// }

// #include <stdio.h>
// int *p;
// int main()
// {
// int i = 5;
// p = &i;printf("%d, %x, %d",i,p,*p);
// return 0;
// }

// #include <stdio.h>
// int main(){
//     int a[5] = {11,22,33,44,55};
//     int *p;
//     p = &a[0];
//     p++;
//     printf("%d, %d",*p,*(p+1));
//     return 0;
// }

// #include <stdio.h>
// int main(){
// int A[5]= {1,2,3,4,5};
// printf("%d",sizeof(A)/sizeof(A[0]));
// }

// #include <stdio.h>
// int main(){
//     int A[5]= {1,2,3,4,5};
//     int *p;
//     p= A;
//     printf("%d",*(p+1));
//     return 0;
// }

// #include <stdio.h>
// void main(){
// int *ptr=10;
// printf("Value of ptr:%d",*ptr);
// }

// #include <stdio.h>
// #include <string.h>
// void main(){
// char name1[10]="ram";
// char name2[10]="Shyam";
// printf("String compare result:%d",strcmp(name1,name2));
// }

// #include <stdio.h>
// #include <string.h>
// void main(){
// char name1[10]="ram";
// char name2;
// printf("String copy result:%s",strcpy(name1,name2));
// }

