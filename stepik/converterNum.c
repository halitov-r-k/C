//Конвертация цифр
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<string.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    printf("Ввод строки цифр в двоичном формате (0|1) 8 позиций: ");
    char digit2[9];//строка двоичных цифр
    int p = 7; //степень числа
    scanf("%s", digit2);
    digit2[8]='\0';
    printf("Введена цифра в двоичном формате: %s. \n", digit2);
    //конвертация
    int digit10 = 0;//Десятичная цифра в числовом формате
    for(int count = 0; count<8; count++){
        //printf("%c", digit2[count]);
        if (digit2[count] == '1'){
        digit10 += pow(2, p);
        //printf("Степень: %i; Десятичная цифра: %d \n", p, digit10);
        }
        p--;
    }
    printf("Цифра в десятичном формате: %d \n", digit10);
    //Перевод в 16-ти цифру

char digit2_1[5];
char digit2_2[5];
for(int count =0; count < 4; count++){
        digit2_1[count] = digit2[count];}
digit2_1[4]='\0';
for(int count =0; count < 4; count++){
    digit2_2[count] = digit2[count+4];}
digit2_2[4]='\0';
//printf("первая часть строки двоичного числа: %s \n", digit2_1);
//printf("вторая часть строки двоичного числа: %s \n", digit2_2);
char digit16_1, digit16_2;
if(strcmp("0000", digit2_1)==0) {digit16_1='0';}
if(strcmp("0001", digit2_1)==0) {digit16_1='1';}
if(strcmp("0010", digit2_1)==0) {digit16_1='2';}
if(strcmp("0011", digit2_1)==0) {digit16_1='3';}
if(strcmp("0100", digit2_1)==0) {digit16_1='4';}
if(strcmp("0101", digit2_1)==0) {digit16_1='5';}
if(strcmp("0110", digit2_1)==0) {digit16_1='6';}
if(strcmp("0111", digit2_1)==0) {digit16_1='7';}
if(strcmp("1000", digit2_1)==0) {digit16_1='8';}
if(strcmp("1001", digit2_1)==0) {digit16_1='9';}
if(strcmp("1010", digit2_1)==0) {digit16_1='A';}
if(strcmp("1011", digit2_1)==0) {digit16_1='B';}
if(strcmp("1100", digit2_1)==0) {digit16_1='C';}
if(strcmp("1101", digit2_1)==0) {digit16_1='D';}
if(strcmp("1110", digit2_1)==0) {digit16_1='E';}
if(strcmp("1111", digit2_1)==0) {digit16_1='F';}
//printf("digit16_1 = %c \n", digit16_1);
if(strcmp("0000", digit2_2)==0) {digit16_2='0';}
if(strcmp("0001", digit2_2)==0) {digit16_2='1';}
if(strcmp("0010", digit2_2)==0) {digit16_2='2';}
if(strcmp("0011", digit2_2)==0) {digit16_2='3';}
if(strcmp("0100", digit2_2)==0) {digit16_2='4';}
if(strcmp("0101", digit2_2)==0) {digit16_2='5';}
if(strcmp("0110", digit2_2)==0) {digit16_2='6';}
if(strcmp("0111", digit2_2)==0) {digit16_2='7';}
if(strcmp("1000", digit2_2)==0) {digit16_2='8';}
if(strcmp("1001", digit2_2)==0) {digit16_2='9';}
if(strcmp("1010", digit2_2)==0) {digit16_2='A';}
if(strcmp("1011", digit2_2)==0) {digit16_2='B';}
if(strcmp("1100", digit2_2)==0) {digit16_2='C';}
if(strcmp("1101", digit2_2)==0) {digit16_2='D';}
if(strcmp("1110", digit2_2)==0) {digit16_2='E';}
if(strcmp("1111", digit2_2)==0) {digit16_2='F';}
//printf("digit16_2 = %c \n", digit16_2);
char digit16[3] = {digit16_1, digit16_2, '\0'};
printf("digit16 = %s \n", digit16);
return 0;
}
