// #include <stdio.h>

// int main() {
//     FILE* oddfile = fopen("odd.txt","r"),
//     *evenfile = fopen("even.txt","r"),
//     *numberfile = fopen("number.txt","w");

//     if (oddfile == NULL || evenfile == NULL || numberfile == NULL) {
//         printf("Error opening file!");
//         return 1;
//     }
//     int num;

//     while (fscanf(oddfile,"%d",&num) != EOF) {
//         fprintf(numberfile,"%d\n",num); 
//     }

//     while (fscanf(evenfile,"%d",&num) != EOF){
//         fprintf(numberfile,"%d\n",num);
//     }
    
//     fclose(evenfile);
//     fclose(oddfile);
//     fclose(numberfile);
//     printf("Success");
//     return 0;
// }

#include <stdio.h>

int main() {
    FILE* oddfile = fopen("odd.txt","r"),
    * evenfile = fopen("even.txt","r"),
    * numberfile = fopen("number.txt","w"); 
    
    if (oddfile == NULL || evenfile == NULL || numberfile == NULL) {
        printf("Error opening file!");
        return 1;
    }
    int num;

    while (fscanf(oddfile,"%d",&num) != EOF) {
        fprintf(numberfile,"%d\n",num);
    }
    while (fscanf(evenfile,"%d",&num) != EOF) {
        fprintf(numberfile,"%d\n",num);
    }
    printf("Success");
    fclose(oddfile);
    fclose(evenfile);
    fclose(numberfile);
    return 0;
}