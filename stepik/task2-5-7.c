#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int inum1, inum2;
    float dnum1;
    scanf("%d, %d, %*f, %f", &inum1, &inum2, &dnum1);
    printf("%d %d %.2f", inum1, inum2, dnum1);
    return 0;
}
