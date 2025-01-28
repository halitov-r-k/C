#include<stdio.h>
int main(){
printf("-------sizeof()---\n");

int num_int;
float num_float;
double num_double;
char char1;
printf("Size of variable: \n");
printf("int: %lu \n", sizeof(num_int));
printf("float: %lu \n", sizeof(num_float));
printf("double: %lu \n", sizeof(num_double));
printf("char: %lu \n", sizeof(char1));
printf("---end-sizeof()---");
}
