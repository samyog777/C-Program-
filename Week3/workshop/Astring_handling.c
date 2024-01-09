# include <stdio.h>
# include <string.h>

//STRLEN 
// int main() {
//     char string1[20];
//     printf("enter a srring: ");
//     scanf("%s", string1);
//     printf("The string length is: %d", strlen(string1));
//     return 0;
// }

//STRCPY
// int main() {
//     char string1[20], string2[20];
//     printf("Enter string1:");
//     scanf("%s", string1);
//     printf("String1 gets copied to string2: %s \n", strcpy(string2, string1));
//     printf("String 2: %s", string2);
//     return 0;
// }

//STRCAT
// int main() {
//     char string1[20],string2[20];
//     printf("Enter string1: ");
//     scanf("%s", string1);
//     printf("Enter string2: ");
//     scanf("%s", string2);
//     printf("String1 and String2 combined: %s", strcat(string1, string2));
//     return 0;
// }

//STRCMP
// It work as an ASCII value
int main() {
    char string1[20],string2[20];
    printf("Enter string1: ");
    scanf("%s", string1);
    printf("Enter string2: ");
    scanf("%s", string2);
    printf("String1 and String2 combined: %d", strcmp(string1, string2));
    return 0;
}
