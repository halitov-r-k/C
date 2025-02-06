#include<stdio.h>
int main()
{
    //memory address
    printf("---memory-adress---\n");
    int num = 678;
    int* ptr = &num;//pointer
    printf("%d \n", num);
    printf("%p \n", &num);
    printf("%p \n", ptr);
    printf("%d \n", *ptr);
    printf("---end-memory-address---");
    return 0;
}
