#include<stdio.h>
int main(){
printf("---Pointer&Arrays \n");
    int array1[4] = {25, 50, 75, 100};
    int count;
    int arrayLenght = sizeof(array1)/sizeof(array1[0]);
    for(count = 0; count < arrayLenght; count++){
        printf("%i ", array1[count]);
        printf("%p \n", array1[count]);
    }
    printf("%lu \n", sizeof(array1));
    printf("%p \n", array1);
    printf("%p \n", &array1[0]);
    printf("%d \n", *array1);
    printf("%d \n", *(array1+1));
    printf("%d \n", *(array1+2));
    printf("%d \n", *(array1+3));

    int *ptr = array1;
    for(count=0; count <arrayLenght; count++){
        printf("%d \n", *(ptr + count));
    }
    *(array1 + 1) =17;
    for(count = 0; count < arrayLenght; count++){
        printf("%i \n", array1[count]);
    }


printf("---End-Pointer&Arrays \n");
return 0;
}
