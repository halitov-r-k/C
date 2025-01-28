#include<stdio.h>
int main(){
printf("---start-conversion---\n");
/* int num_int;
 * float num_float;
 * //Implicit Conversion
 * //conersion int to float
 * num_int = 9;
 * num_float = num_int;
 * printf("Conversion int to float: num_int = %i; num_float = %f; \n", num_int, num_float);
 * //conversion float to int
 * num_float = 7.99;
 * num_int = num_float;
 * printf("Conversion float to int: num_float = %f; num_int = %d; \n",  num_float, num_int);
 */
//Explicit
float result;
int num1, num2;
num1 = 2;
num2 = 5;
result = (float) num2 / num1;
printf("Result %i div %i = %.1f \n", num1, num2, result);


printf("---end---conversion---");
}
