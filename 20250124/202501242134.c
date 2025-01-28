#include <stdio.h>
int main(){
char str[50];
printf("Type string end press enter: \n");
fgets(str, sizeof(str), stdin);
printf("String full: %s", str);
return 0;
}
