#include <stdio.h>
#include <string.h>

void anagram(char str1[], char str2[]);
int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    anagram(str1,str2);
}

void anagram(char str1[], char str2[]) {
    if (strlen(str1)==strlen(str2)) {
        int str1_count = 0;
        int str2_count = 0;
        for (int i=0; str1[i] != '\0';i++) {
            str1_count += str1[i];
        }
        for (int i=0;str2[i] != '\0';i++) {
            str2_count += str2[i];
        }
        if (str1_count == str2_count) {
            printf("ANAGRAM");
        } else {
            printf("Not and anagram");
        }
    } else {
        printf("Not an anagram");
    }
}

