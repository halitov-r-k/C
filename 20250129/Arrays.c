//Array
#include<stdio.h>
int main(){
printf("---Array---\n");
int ArrNum[] = {0,1,2,3,4,5,6,7,8,9};
//printf("%d \n", ArrNum[0]);
int count;
int length = sizeof(ArrNum)/sizeof(ArrNum[0]);
    for(count = 0; count < 10; count++){
        printf("%d \n", ArrNum[count]);
    }
printf("Sizeof ArrNum: %lu \n", sizeof(ArrNum));
printf("Length ArrNum %d \n", length);

for(count=0; count < length; count++){
    printf("%d ", ArrNum[count]);
}
printf("\n");
printf("matrix \n");
int matrix[2][3]={
    {1,4,2},
    {3,6,8}
};
int row, column;
for(row=0;row<2;row++){
    for(column=0;column<3;column++){
        printf("%d ",matrix[row][column]);
    }
    printf("\n");
}


printf("---End-Array---\n");
return 0;
}
