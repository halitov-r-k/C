#include<stdio.h>
#include<locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    printf("Привет");
    return 0;
}
