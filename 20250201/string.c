//String
#include<stdio.h>
int main(){
printf("---string---\n");
 char string1[] = "String 1";
 printf("%s \n", string1);
 string1[7] = '2';
 printf("%s \n", string1);

 //loop through a String
 printf(" loop for through string \n");
 int count;
 for(count = 0; count < 8; count++){
    printf("%c", string1[count]);
 }
 printf("\n");

 int length = sizeof(string1)/ sizeof(string1[0]);
 for(count = 0; count < length; ++count){
    printf("%c", string1[count]);
 }
 printf("\n");

 char string3[] = {'S', 't', 'r', 'i', 'n', 'g', ' ', '3' , '\0'};
 printf("%s \n", string3);
//special characters
 char string4[] = "Begin string4 \"Strong 5 \" contination string4 \n";
 printf("%s", string4);
printf("---string-end---");
return 0;
}
