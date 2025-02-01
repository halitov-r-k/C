//String functions
#include<stdio.h>
#include<string.h>
int main(){
printf("===String=Functions===\n");
    printf("---strlen()---\n");
    char string1[] = "0123456789";
    printf("Length string1 is: %d \n", strlen(string1));
    printf("---strlen()-end---\n");
//Concatenate String
    printf("---strcat()---\n");
    char string2[] = "String2";
    char string3[] = "String3";
    strcat(string2, string3);
    printf("strcat(string2, string3) = %s \n", string2);
    printf("---strcat()-end---\n");
//Copy String
    printf("---strcpy()---\n");
    char string4[10] = "String4";
    char string5[10];
    strcpy(string5, string4);
    printf("strcpy(string5, string4) string5 =%s \n", string5);
    printf("---strcpy()-end---\n");
//Compary String
    printf("---strcmp()---\n");
    char string6[] = "String type-1";
    char string7[] = "String type-1";
    char string8[] = "String type-2";
    printf("Compare strings type-1, true = %d \n", strcmp(string6, string7));
    printf("Compare strings type-1 and type-2, false = %d \n", strcmp(string6, string8));
    printf("---strcmp()-end--\n");
printf("===String=Functions=End==\n");
return 0;
}
