#include<stdio.h>
void function1(){
        printf("function1 \n");
    }

void function2(char name[], int age){
    printf("Hello %s, %i age \n", name, age);
}
int main(){

    function1();
    function2("Ruslan", 53);
return 0;

}
