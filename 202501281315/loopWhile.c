#include<stdio.h>
#include<stdbool.h>
int main(){
printf("-----Loop-While-----\n");
//while(condition){;}
bool condition = 1;
int count;
//conditoin = 1;
count = 1;
while (condition){
    printf("%i \n", count);
    count++;
    if (count==10){condition = 0;}
}

printf("---End-Loop-While---");
return 0;
}
