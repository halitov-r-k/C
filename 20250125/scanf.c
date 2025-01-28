#include<stdio.h>
int main(){
    printf("---scanf------------------------\n");
    //int num1;
    //char char1;
    char string1[30];
    //printf("Type a number:");
    //printf("Type a number and a character and press enter:");
    printf("Enter string:");
    //scanf("%d", &num1);
    //scanf("%d %c", &num1, &char1);
    //scanf("%s",string1);
    fgets(string1, sizeof(string1), stdin);
    //printf("Your number is: %d \n", num1);
    //printf("Your character is: %c \n", char1);
    printf("Your string: %s \n", string1);

    printf("---end-scanf--------------------");
}
