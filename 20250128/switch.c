#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("---Switch-------\n");
    /*switch (expression) {
      case x : { break;}
      case y : { break;}
      default : {;}
    }
    */
    int num = 5;
    switch(num){
        case 1 : printf("1 \n"); break;
        case 2 : printf("2 \n"); break;
        case 3 : printf("3 \n"); break;
        case 4 : printf("4 \n"); break;
        default : printf("None \n");
    }

    printf("---Switch-end---");
    return 0;
}

