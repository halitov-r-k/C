#include<stdio.h>
#include<stdbool.h>
//C Loop Do While
int main(){
printf("---Loop-Do-While--------\n");
//do{;}while(condition);
bool condition;
int count;
condition = 1;
count = 1;
do{
    printf("%i \n", count);
    count++;
    if (count == 10) {condition = 0;}
}while(condition);
printf("---End-Loop-Do-While----");
return 0;
}
