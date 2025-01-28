#include<stdio.h>
#include<stdbool.h>
int main(){
printf("-----------condition------------\n");
bool condition1, condition2;
condition1 = 0;
//condition2 = 0;
//if (condition) {}
//if(condition){printf("Condition true \n");}
//condition =0;
//if(!condition) {printf("Condition false \n");}
//if(condition) {true} else {true}
/* if(condition1) {printf("Condition true \n");}
 * else {printf("Condition false \n");}
 */
//if(condition1) {true} else if (condition2){true} else {false}
/* if (condition1) {printf("Condition1 true \n");}
 * else if (condition2) {printf("Condition1 false, condition2 true \n");}
 * else {printf("Condition1, Condition2 false \n");}
 */

//variable = (condition) ? expressionTrue : expressionFalse;
(condition1) ? printf("Condition1 true \n") : printf("Condition1 false \n");


printf("--------end-condition-----------");
}
