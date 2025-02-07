#include<stdio.h>
//memory
int main(){
    int numInt1;
    float numFloat1;
    double numDouble1;
    char char1;
    printf("---Memory---\n");
    printf("Int: %lu \n", sizeof(numInt1));
    printf("Float: %lu \n", sizeof(numFloat1));
    printf("Double: %lu \n", sizeof(numDouble1));
    printf("Char: %lu \n", sizeof(char1));
    printf("---End-Memory---\n");
return 0;
}
