#include<stdio.h>
int main(){
FILE *fptr;
//fptr = fopen("data.txt", "w");
//fptr = fopen("data.txt", "a");
fptr = fopen("data.txt", "r");
char string1[100];
//fgets(string1, 100, fptr);
//fprintf(fptr, "\nHello file2");
//printf("%s", string1);
if(fptr == NULL) {printf("Not able to open the file");}
while(fgets(string1, 100, fptr)){
    printf("%s", string1);
}

fclose(fptr);
return 0;

}
