#include<stdio.h>

struct struct1{
int num1;
char char1;
char string1[30];
};

int main(){

struct struct1 s1;
s1.num1 = 12;
s1.char1 = 'Q';
strcpy(s1.string1, "String1");
printf("My structure s1: num:%d, char:%c, string:%s. \n ", s1.num1, s1.char1, s1.string1);

struct struct1 s2 = { 123, 'Z', "String2"};
printf("My structure s2: num:%d, char:%c, string:%s. \n ", s2.num1, s2.char1, s2.string1);

struct struct1 s3 =s1;
printf("My structure s3: num:%d, char:%c, string:%s. \n ", s3.num1, s3.char1, s3.string1);
s3.num1 = 14;
s3.char1 = 'R';
strcpy(s3.string1, "String3");
printf("My structure s3: num:%d, char:%c, string:%s. \n ", s3.num1, s3.char1, s3.string1);

return 0;
}
