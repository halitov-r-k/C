#include<stdio.h>
int globalNum=5;
void f1(){
    printf ("Function 1 \n");
    int f1Num = 22;
    printf("%i \n", globalNum);
    //printf("%i \n", mainNum);
    globalNum++;
}
int main(){
    printf("Main \n");
    int mainNum =66;
    f1();
    printf("%i \n", globalNum);
return 0;
}
