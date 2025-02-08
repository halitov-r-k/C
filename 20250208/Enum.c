//enum
#include<stdio.h>
enum Enum1{
LOW = 25,
MEDIUM = 50,
HIGH = 75
};

int main(){
enum Enum1 e1;
e1 = LOW;

printf("%d \n", e1);
}
