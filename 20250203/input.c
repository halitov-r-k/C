#include<stdio.h>
int main()
{
    printf("---input ---\n");

    //int num1;
    //printf("Type a number:");
    //scanf("%d", &num1);
    //printf("You number is %d \n", num1);

    //char char1;
    //printf("Type a number and char and press enter: ");
    //scanf("%c",&char1);
    //scanf("%d %c", &num1, &char1);
    //printf(" You number is: %d \n Your char is: %c \n", num1, char1);

    char string1[30];
    printf("Enter your string:");
    //scanf("%s", string1);
    fgets(string1, sizeof(string1), stdin);
    printf("Your string %s \n", string1);


    printf("---end-input ---\n");
}
