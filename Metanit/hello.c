#include<stdio.h>
#include<locale.h>
int main(void){
    char *locale = setlocale(LC_ALL, "");
    printf("������ \n \a");
    system("pause");
    return 0;
}
