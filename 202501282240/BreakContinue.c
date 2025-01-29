//Break Continue
#include<stdio.h>
int main(){
int count;
printf("---Break----\n");
    for(count = 0; count < 10; count++){
            printf("%i \n", count);
            if(count == 5) {break;}
    }
    printf("---End-Break---\n");
    printf("----------Continue-----------\n");
        for(count = 0; count < 10; count++){
            if(count == 5){continue;}
            printf("%i \n", count);
        }

    printf("------End-Continue-----------");
return 0;
}
